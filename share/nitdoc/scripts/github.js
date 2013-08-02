// User
var userB64 = null;
var userName = "";
var password = "";
var sessionStarted = false;
var editComment = 0;
var currentfileContent = '';
var originalFileContent = '';
var addNewComment = false;
var commentLineStart;
var commentLineEnd;

// SHA GitHub
var shaLastCommit = "";
var shaBaseTree;
var shaNewTree;
var shaNewCommit;
var shaBlob;
var shaMaster;
var repoExist = false;
var branchExist = false;
var githubRepo;
var loginProcess = false; 
var signedOff = '';
var userEmail = '';
var commitMessage = '';
var numComment = '';
var showcomment = false;

// Spinner vars
var opts = {
	  lines: 11, // The number of lines to draw
	  length: 7, // The length of each line
	  width: 4, // The line thickness
	  radius: 10, // The radius of the inner circle
	  corners: 1, // Corner roundness (0..1)
	  rotate: 0, // The rotation offset
	  color: '#FFF', // #rgb or #rrggbb
	  speed: 1, // Rounds per second
	  trail: 60, // Afterglow percentage
	  shadow: false, // Whether to render a shadow
	  hwaccel: false, // Whether to use hardware acceleration
	  className: 'spinner', // The CSS class to assign to the spinner
	  zIndex: 99999, // The z-index (defaults to 2000000000)
	  top: '300', // Top position relative to parent in px
	  left: 'auto' // Left position relative to parent in px
	};
var targetSpinner = document.getElementById('waitCommit');
var spinner = new Spinner(opts).spin(targetSpinner);

// Check if a comment is editing
window.onbeforeunload = function() {
	if(editComment > 0){
    	return 'Are you sure you want to leave this page?';
	}
};

$(document).ready(function() {

	// Hide edit tags
	$('textarea').hide();
	$('a[id=commitBtn]').hide();
	$('a[id=cancelBtn]').hide();
	// Display Login modal
	$("#logGitHub").click(function(){ displayLogginModal(); }); 
	// Update display
	updateDisplaying();
	// If cookie existing the session is opened
	if(sessionStarted){ userB64 = "Basic " + getUserPass("logginNitdoc"); }

	// Sign In an github user or Log out him
	$("#signIn").click(function(){
		if(!sessionStarted){
			if($('#loginGit').val() == "" || $('#passwordGit').val() == ""){ displayMessage('Please informed login/password field!', 40, 45); }
			else
			{
				userName = $('#loginGit').val();
				password = $('#passwordGit').val();
				githubRepo = $('#repositoryGit').val();
				branchName = $('#branchGit').val();
				userB64 = "Basic " +  base64.encode(userName+':'+password);
				if(checkSignIn()){
					// Check if repo exist
					isRepoExisting();
					if(repoExist){
						$.when(isBranchExisting()).done(function(){
							loginProcess = true;
							if(branchExist){
								setCookie("logginNitdoc", base64.encode(userName+':'+password+':'+githubRepo+':'+branchName), 1);
								$('#loginGit').val("");
								$('#passwordGit').val("");
								reloadComment();
							}
						});
					}
				}
			}
		}	
		else
		{
			// Delete cookie and reset settings
			del_cookie("logginNitdoc");
			closeAllCommentInEdtiting();
		}	
		displayLogginModal();
	});

	// Activate edit mode
   	$('pre[class=text_label]').click(function(){
		// the customer is loggued ?
		if(!sessionStarted || userName == ""){
			// No => nothing happen
			return;
		}
		else{
			numComment = $(this).attr('title');
			var arrayNew = $(this).text().split('\n');
			var lNew = arrayNew.length - 1;
			var adapt = "";

			for (var i = 0; i < lNew; i++) {
				adapt += arrayNew[i];
				if(i < lNew-1){ adapt += "\n"; }
			}
			editComment += 1;
			getCommentOfFunction($(this));
			// hide comment
			$(this).hide();
			// Show edit box 
			$(this).next().show();
			// Show cancel button
			$(this).next().next().show();
			// Show commit button
			$(this).next().next().next().show();
			// Add text in edit box
			if($(this).next().val() == "" || $(this).next().val() != adapt){ $(this).next().val(adapt); }
			// Resize edit box 
			$(this).next().height($(this).next().prop("scrollHeight"));
			resizeTextarea($(this).next());
			// Select it
			$(this).next().select();
			preElement = $(this);
		}
	});

   	// Disable the edit mode
   	$('a[id=cancelBtn]').click(function(){
   	 	$(this).parent().prev().children('#lblDiffCommit').text("");
   	 	showcomment = false;
   	 	closeEditing($(this));
	});

   	// Display commit form
   	$('a[id=commitBtn]').click(function(){
		updateComment = $(this).prev().prev().val();
		commentType = $(this).prev().prev().prev().attr('type');

		if(updateComment == ""){ displayMessage('The comment field is empty!', 40, 45); }
		else{
			if(!sessionStarted){
				displayMessage("You need to be loggued before commit something", 45, 40);
				displayLogginModal();
				return;
			}
			
			// Create the commit message
			commitMessage = 'Wikidoc: modified comment in ' + $(this).parent().prev().prev().html().split(' ')[1];
			$('#commitMessage').text(commitMessage);
			$('#commitMessage').css({'display': 'block'});
			pathFile = $(this).prev().prev().prev().attr('tag');
			$('#modal').show().prepend('<a class="close"><img src="resources/icons/close.png" class="btn_close" title="Close" alt="Close" /></a>');
			$('body').append('<div id="fade"></div>');
			$('#fade').css({'filter' : 'alpha(opacity=80)'}).fadeIn();
		}
   	 });

   	// Close commit form
   	$('.btn_close').click(function(){
   	 	$(this).hide();   	 	
   	 	$(this).next().hide();   	 	
   	 	if(editComment > 0){ editComment -= 1; }
   	 	$('#chkSignedOff').attr('checked', false);
   	 	removeSignedOff();
   	 });

	//Close Popups and Fade Layer
	$('body').on('click', 'a.close, #fade', function() {
		if(editComment > 0){ editComment -= 1; }
		$('#fade , #modal').fadeOut(function() {
			$('#fade, a.close').remove();  
		});		
		$('#modalQuestion').hide();
		$('#chkSignedOff').attr('checked', false);
		removeSignedOff();
	});

	$('#loginAction').click(function(){
		var text;
		var url;
		var line;
		// Look if the customer is logged
		if(!sessionStarted){
			displayMessage("You need to be loggued before commit something", 100, 40);
			$('.popover').show();
			return;
		}
		else{ userB64 = "Basic " + getUserPass("logginNitdoc"); }
		// Check if repo exist
		isRepoExisting();
		if(repoExist){
			isBranchExisting();
			if(branchExist){
				editComment -= 1;
				commitMessage = $('#commitMessage').val().replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t').replace(/\"/g,'\\"');
				if(commitMessage == ""){ commitMessage = "New commit";}
				if(sessionStarted){
					if ($.trim(updateComment) == ''){ this.value = (this.defaultValue ? this.defaultValue : ''); }
					else{ 
						displaySpinner();
						startCommitProcess();
					}
				}
				$('#modal, #modalQuestion').fadeOut(function() {
					$('#login').val("");
					$('#password').val("");
					$('textarea').hide();
					$('textarea').prev().show();
				});
				$('a[id=cancelBtn]').hide();
				$('a[id=commitBtn]').hide();
				$('a[id=lblDiffCommit]').text("");
				showcomment = false;
				// Re-load all comment
				reloadComment();
	 		}
 		}
		else{ editComment -= 1; }
		$('#chkSignedOff').attr('checked', false);
	});
	
	// Cancel creating branch
	$('#btnCancelBranch').click(function(){
		editComment -= 1;
   	 	$('#modalQuestion').hide();
   	 	$('#fade , #modal').fadeOut(function() { $('#fade, a.close').remove(); });
		return;
   	});

   	// Create new branch and continu
   	$('#btnCreateBranch').click(function(){
   	 	$('#modalQuestion').hide();
   	 	if($('#btnCreateBranch').text() != 'Ok'){
	   	 	// Create the branch
	   	 	createBranch();
	   	 	commitMessage = $('#commitMessage').val().replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t').replace(/\"/g,'\\"');
			if(commitMessage == ""){ commitMessage = "New commit"; }
			if(userB64 != ""){                      
		        if(loginProcess){
					setCookie("logginNitdoc", base64.encode(userName+':'+password+':'+githubRepo+':'+branchName), 1);        
					$('#loginGit').val("");
					$('#passwordGit').val("");
					loginProcess = false;          
					displayLogginModal();
		        }
		        else{
					if ($.trim(updateComment) == ''){ this.value = (this.defaultValue ? this.defaultValue : ''); }
					else{ startCommitProcess(); }
				} 
		    }
		}
		else
		{
			$('#fade , #modalQuestion, #modal').fadeOut(function() { $('#fade, a.close').remove(); });
		}
   	});

   	$('a[class=newComment]').click(function(){
   	 	addNewComment = true;   	 	
   	 	editComment += 1;
   		// hide comment
		$(this).hide();
		// Show edit box 
		$(this).next().show();
		// Show cancel button
		$(this).next().next().show();
		// Show commit button
		$(this).next().next().next().show();
		// Resize edit box 
		$(this).next().height($(this).next().prop("scrollHeight"));
		resizeTextarea($(this).next());
		// Select it
		$(this).next().select();
		preElement = $(this);  
   	 });

   	$("#dropBranches").change(function () {		
		$("#dropBranches option:selected").each(function () {
			if(branchName != $(this).text()){
				branchName = $(this).text();
			}
		});
		$.when(updateCookie(userName, password, githubRepo, branchName)).done(function(){
			closeAllCommentInEdtiting();
			reloadComment();
		});
	});

	$("pre").hover(
		function () {
			if(sessionStarted == true){
				$(this).css({'cursor' : 'hand'});
			}
			else{
				$(this).css({'cursor' : ''});
			}
		},
		function () {
			if(sessionStarted == true){
				$(this).css({'cursor' : 'pointer'});
			}
			else{
				$(this).css({'cursor' : ''});	
			}
		}
	);

	$('#chkSignedOff').click(function(){
		if($(this).is(':checked')){ addSignedOff(); }
		else{ removeSignedOff(); }
	})

	$('a[id=lblDiffCommit]').click(function(){
		showComment($(this));
	});
});

// Init process to commit the new comment
function startCommitProcess()
{	
	if($('#chkSignedOff').is(':checked')){
		var numL = preElement.attr("title");
		commentLineStart = numL.split('-')[0] - 1;	
		if(addNewComment) { commentLineStart++; }
		commentLineEnd = (commentLineStart + preElement.text().split('\n').length) - 1;
		state = true;	
		replaceComment(updateComment, currentfileContent);
		getLastCommit();	
		getBaseTree();	
		editComment = false;
	}
	else{
		displayMessage('Please sign this commit', 40, 40); 
	}
}

function displayLogginModal(){
	if ($('.popover').is(':hidden')) { 
		if(sessionStarted){ getListBranches(); }
		$('.popover').show(); 
	}
	else { $('.popover').hide(); }	
	updateDisplaying();
}

function updateDisplaying(){
	if (checkCookie())
	{
		userB64 = "Basic " + getUserPass("logginNitdoc"); 
	  	$('#loginGit').hide();
	  	$('#passwordGit').hide();
	  	$('#lbpasswordGit').hide();		
	  	$('#lbloginGit').hide();	
	  	$('#repositoryGit').hide();
	  	$('#lbrepositoryGit').hide();
	  	$('#lbbranchGit').hide();  
	  	$('#branchGit').hide();
	  	$('#listBranches').show();
	  	$('#divGitHubRepoDisplay').show();
	  	$("#liGitHub").attr("class", "current");
	  	$("#imgGitHub").attr("src", "resources/icons/github-icon-w.png");
	  	$('#nickName').text(userName);
	  	$('#githubAccount').attr("href", "https://github.com/"+userName);
	  	$('#logginMessage').css({'display' : 'block'});
	  	$('#logginMessage').css({'text-align' : 'center'});
	  	$('.popover').css({'height' : '190px'});
	  	$('#signIn').text("Sign out");
	  	$('#githubRepoDisplay').text(githubRepo);
	  	sessionStarted = true;
	  	reloadComment();
	}
	else
	{
		sessionStarted = false;
		$('#logginMessage').css({'display' : 'none'});
		$("#liGitHub").attr("class", "");
	  	$("#imgGitHub").attr("src", "resources/icons/github-icon.png");
	  	$('#loginGit').val("");
	  	$('#passwordGit').val("");
	  	$('#nickName').text("");
	  	$('.popover').css({'height' : '325px'});
  		$('#logginMessage').css({'display' : 'none'});
  		$('#repositoryGit').val($('#repoName').attr('name'));
	  	$('#branchGit').val('wikidoc');  
	  	$('#signIn').text("Sign In");
		$('#loginGit').show();
	  	$('#passwordGit').show();
	  	$('#lbpasswordGit').show();
	  	$('#lbloginGit').show();	
	  	$('#repositoryGit').show();
	  	$('#lbrepositoryGit').show();
	  	$('#lbbranchGit').show();  
	  	$('#branchGit').show();  
	  	$('#listBranches').hide();
	  	$('#divGitHubRepoDisplay').hide();
	}
}

function setCookie(c_name, value, exdays)
{
	var exdate=new Date();
	exdate.setDate(exdate.getDate() + exdays);
	var c_value=escape(value) + ((exdays==null) ? "" : "; expires="+exdate.toUTCString());
	document.cookie=c_name + "=" + c_value;
}

function del_cookie(c_name)
{
    document.cookie = c_name + '=; expires=Thu, 01 Jan 1970 00:00:01 GMT;';
}

function updateCookie(user, pwd, repo, branch){
	if(checkCookie()){
		branchName = branch;
		setCookie("logginNitdoc", base64.encode(user+':'+pwd+':'+repo+':'+branch), 1);
	}
}

function getCookie(c_name)
{
	var c_value = document.cookie;
	var c_start = c_value.indexOf(" " + c_name + "=");
	if (c_start == -1) { c_start = c_value.indexOf(c_name + "="); }
	if (c_start == -1) { c_value = null; }
	else
	{
		c_start = c_value.indexOf("=", c_start) + 1;
		var c_end = c_value.indexOf(";", c_start);
	  	if (c_end == -1) { c_end = c_value.length; }
		c_value = unescape(c_value.substring(c_start,c_end));
	}
	return c_value;
}

function getUserPass(c_name){
	var cookie = base64.decode(getCookie(c_name));
	return base64.encode(cookie.split(':')[0] + ':' + cookie.split(':')[1]);
}

function checkCookie()
{
	var cookie=getCookie("logginNitdoc");
	if (cookie!=null && cookie!="")
	{
		cookie = base64.decode(cookie);
		userName = cookie.split(':')[0];
		password = cookie.split(':')[1];
		githubRepo = cookie.split(':')[2];		
		branchName = cookie.split(':')[3];
	  	return true;
	}
	else { return false; }
}

function getLastCommit() 
{   
	var urlHead = '';
	if(sessionStarted){ urlHead = "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/"+branchName;}
	else{ 
		// TODO: get url of the original repo.
		return;
	}

    $.ajax({
        beforeSend: function (xhr) { 
            if (userB64 != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: urlHead,
        dataType:"json",
        async: false,
        success: function(success)
        {        	
            shaLastCommit = success.object.sha;            
        }
    });
}

function getBaseTree()
{	
    $.ajax({ 
        beforeSend: function (xhr) { 
            if (userB64 != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/commits/" + shaLastCommit,
        dataType:"json",
        async: false,
        success: function(success)
        {   
            shaBaseTree = success.tree.sha;
            if (state){ setBlob(); }
            else{ return; }            
        },
        error: function(){
        	return;
        }
    });    
}

function setNewTree()
{
    $.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/trees", 
        async: false,
        dataType:'json',
        data:'{ "base_tree" : "'+shaBaseTree+'", '+
                '"tree":[{ '+
                    '"path":"'+ pathFile +'",'+
                    '"mode":"100644",'+
                    '"type":"blob",'+
                    '"sha": "'+ shaBlob +'"'+
                '}] '+
            '}',        
        success: function(success)
        { // si l'appel a bien fonctionné
            shaNewTree = success.sha;
            setNewCommit();        	
        },
        error: function(){
        	return;
        }
    });
}

function setNewCommit()
{
    addSignedOff();
    $.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/commits", 
        async: false,
        dataType:'json',
        data:'{ "message" : "'+ commitMessage +'", '+
                '"parents" :"'+shaLastCommit+'",'+ 
                '"tree": "'+shaNewTree+'"'+
             '}',        
        success: function(success)
        {
            shaNewCommit = success.sha;
            commit();        	
        },
        error: function(){
        	return;
        }
    });
}

//Create a commit
function commit()
{
    $.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/"+branchName, 
        dataType:'json',
        data:'{ "sha" : "'+shaNewCommit+'", '+
                '"force" :"true"'+
             '}',
        success: function(success) { displayMessage('Commit created successfully', 40, 40); },
        error:function(error){ displayMessage('Error ' + error.object.message, 40, 40); }
    });
}

// Create a blob
function setBlob()
{
    $.ajax({
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization",  userB64); },
        type: "POST",         
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/blobs",         
        async: false,
        dataType:'json',
        data:'{ "content" : "'+text.replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t').replace(/\"/g,'\\"')+'", '+
                '"encoding" :"utf-8"'+
            '}',
        success: function(success)
        {            
            shaBlob = success.sha;
            setNewTree();                  
        },
        error:function(error){ 
        	displayMessage('Error : Problem parsing JSON', 40, 40); 
        	return;
    	}
    });
}

// Display file content
function getFileContent(urlFile, newComment)
{
    $.ajax({
        beforeSend: function (xhr) { 
            xhr.setRequestHeader ("Accept",  "application/vnd.github-blob.raw");
            if (userB64 != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET", 
        url: urlFile, 
        async:false,
        success: function(success)
        {
            state = true;
            replaceComment(newComment, success);            
        }
    });
}

function replaceComment(newComment, fileContent){
	var arrayNew = newComment.split('\n');	
	var lNew = arrayNew.length;
	text = "";
	var lines = fileContent.split("\n");
	for (var i = 0; i < lines.length; i++) {
		if(i == commentLineStart){
			if(addNewComment){
				for(var indexLine=0; indexLine < lines[i+1].length; indexxLine++){
					if(lines[i+1].substr(indexLine,1) == "\t" || lines[i+1].substr(indexLine,1) == "#"){ text += lines[i+1].substr(indexLine,1); }
					else{ break;}
				}
				text += lines[i] + "\n"; 
			}
			// We change the comment
			for(var j = 0; j < lNew; j++){
				if(commentType == 1){ text += "\t# " + arrayNew[j] + "\n"; }
				else{
					if(arrayNew[j] == ""){ text += "#"+"\n"; }
					else{ text += "# " + arrayNew[j] + "\n"; }
				}
			}
		}
		else if(i < commentLineStart || i >= commentLineEnd){
			if(i == lines.length-1){ text += lines[i]; }
			else{ text += lines[i] + "\n"; }
		}
	}
	if(addNewComment){
		addNewComment = false;
	}
}

function getCommentLastCommit(path, origin){
	var urlRaw;
	var bkBranch = '';
	if(origin){// We want to get the original file
		bkBranch = branchName;
		branchName = "master";
	}
	getLastCommit();
	if(shaLastCommit != ""){
		if (checkCookie()) {
			urlRaw="https://rawgithub.com/"+ userName +"/"+ githubRepo +"/" + shaLastCommit + "/" + path;
			$.ajax({  
			    type: "GET",
			    url: urlRaw,
			    async: false,
			    success: function(success)
			    {
				    if(origin){ originalFileContent = success; }
				    else{ currentfileContent = success; }
			    }
			});
		}
	}
	if(origin){ branchName = bkBranch; }
}

function displayMessage(msg, widthDiv, margModal){
	spinner.stop();
	$('#modal').hide();
	$('#btnCancelBranch').hide();	
	$('#modalQuestion').show().prepend('<a class="close"><img src="resources/icons/close.png" class="btnCloseQuestion" title="Close" alt="Close" /></a>');
	$('#txtQuestion').text(msg);
	$('#btnCreateBranch').text("Ok");
	var xModal = $('#modalQuestion').css('width').split('px')[0];
	var yModal = $('#modalQuestion').css('height').split('px')[0];
	var x = $(document).width/2 - xModal/2;
	var y = $(document).height/2 - yModal/2;
	var xBtnBranch = $('#btnCreateBranch').css('width').split('px')[0];
	$('#modalQuestion').css({'left' : x, 'top' : y});
	$('#modalQuestion').show();
	$('#btnCreateBranch').css('margin-left', xModal/2 - xBtnBranch);
	$('body').append('<div id="fade"></div>');
	$('#fade').css({'filter' : 'alpha(opacity=80)'}).fadeIn();
}

function displaySpinner(){
	spinner.spin(targetSpinner);
	$("#waitCommit").show();
}

// Check if the repo already exist
function isRepoExisting(){
	$.ajax({
        beforeSend: function (xhr) { 
            if (userB64 != "") { xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET", 
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo, 
        async:false,
        dataType:'json',
        success: function(){ repoExist = true; },
        error: function()
        {
        	displayMessage('Repo not found !', 35, 45);
        	repoExist = false;
        }
    });
}

// Check if the branch already exist
function isBranchExisting(){
	$.ajax({
		beforeSend: function (xhr) {
			if (userB64 != "") { xhr.setRequestHeader ("Authorization", userB64); }
		},
		type: "GET",
		url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/"+branchName,
		async:false,
		dataType:'json',
		success: function(){ branchExist = true; },
		error: function()
		{
			branchExist = false;
			editComment -= 1;
			$('#modal').hide();
			$('#txtQuestion').text("Are you sure you want to create that branch ?");
			$('#btnCancelBranch').show();
			$('#btnCreateBranch').text("Yes");
			$('#modalQuestion').show();
			$('#modalQuestion').show().prepend('<a class="close"><img src="resources/icons/close.png" class="btnCloseQuestion" title="Close" alt="Close" /></a>');
			$('body').append('<div id="fade"></div>');
			$('#fade').css({'filter' : 'alpha(opacity=80)'}).fadeIn();
		}
	});
}

function getMasterSha() 
{
    $.ajax({
        beforeSend: function (xhr) { 
            if (userB64 != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/master",
        dataType:"json",
        async: false,
        success: function(success) { shaMaster = success.object.sha; }
    });
}

function createBranch(){

	getMasterSha();

	$.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs", 
        data:'{ "ref" : "refs/heads/'+branchName+'",'+
        		'"sha" : "'+shaMaster+'"'+
            '}',
        success: function(){ return; },
        error: function(){
        	editComment -= 1;
        	displayMessage('Impossible to create the new branch : ' + branchName, 40, 40);
        }
    });
}

$.fn.spin = function(opts) {
  this.each(function() {
    var $this = $(this),
        data = $this.data();

    if (data.spinner) {
      data.spinner.stop();
      delete data.spinner;
    }
    if (opts !== false) {
      data.spinner = new Spinner($.extend({color: $this.css('color')}, opts)).spin(this);
    }
  });
  return this;
};

function reloadComment(){
	var path = $('pre[class=text_label]').attr('tag');
	$.when(getCommentLastCommit(path, false)).done(function(){
		if(sessionStarted){ getCommentLastCommit(path, true); }
		$('pre[class=text_label]').each(function(){ getCommentOfFunction($(this)); });
	});
}

function getCommentOfFunction(element){
	var textC = "";	
	var numL = element.attr("title");
	if(numL != null){		         		
		commentLineStart = numL-1;		
		commentLineEnd = element.attr('name').split(numL)[1].split('-')[1]-1;		
		var lines = currentfileContent.split("\n");
		for (var i = 0; i < lines.length; i++) {
			if(i >= commentLineStart-1 && i <= commentLineEnd+1){
				if (lines[i].substr(1,1) == "#"){ textC += lines[i].substr(3,lines[i].length) + "\n";}
				else if(lines[i].substr(0,1) == '#'){ textC += lines[i].substr(2,lines[i].length) + "\n"; }
	        }
	    }
	    if(textC != element.text){element.text(textC);}
	    if (textC != "" && editComment > 0){
	    	var originContent = originalFileContent.split("\n");
	    	var origin = '';
	    	var lblDiff = element.parent().prev().children('#lblDiffCommit');
	    	var preSave = element.parent().children('#preSave');
	    	for (var i = 0; i < originContent.length; i++) {
	    		if(i >= commentLineStart-1 && i <= commentLineEnd+1){
	    			if (originContent[i].substr(1,1) == "#"){ origin += originContent[i].substr(3,originContent[i].length) + "\n";}
	    			else if(originContent[i].substr(0,1) == '#'){ origin += originContent[i].substr(2,originContent[i].length) + "\n"; }
	    		}
	    	}
	    	if(textC != origin && numL == numComment){
	    		// The comment is different compare to the original
	    		if(showcomment == false){ lblDiff.text("Show original comment"); }
	    		preSave.text(origin);
	    	}
	    	else if (numL == numComment){ lblDiff.text(""); }
	    }
	}
}

// Get list of branches
function getListBranches()
{
	cleanListBranches();
    $.ajax({
        beforeSend: function (xhr) { 
            if ($("#login").val() != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET", 
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/branches", 
        async:false,
        dataType:'json',
        success: function(success)
        {   
            for(var branch in success) { 
            	var selected = '';
            	if(branchName == success[branch].name){
            		selected = 'selected';
            	}
            	$('#dropBranches').append('<option value="" '+ selected +'>' + success[branch].name + '</option>');
            }
        }
    });
}

// Delete all option in the list
function cleanListBranches(){
	$('#dropBranches').children("option").remove();
}

function closeAllCommentInEdtiting(){
	$('a[id=cancelBtn]').each(function(){
		closeEditing($(this));
 	});
}

function closeEditing(tag){
	if(editComment > 0){ editComment -= 1; }
 	// Hide itself
 	tag.hide();
 	// Hide commitBtn
 	tag.next().hide();
 	// Hide Textarea
 	tag.prev().hide();
 	// Show comment
 	tag.prev().prev().show();
}

function checkSignIn(){
	var response = false;
	$.ajax({
        beforeSend: function (xhr) {
            if ($("#login").val() != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo,
        async:false,
        dataType:'json',
        success: function(success)
        {
        	getUserInfo();
        	response = true;
        	displayMessage('You are now logged in');
        },
        error: function()
        {
        	displayMessage('Error : Wrong username or password');
        	response = false;
        }
    });
    return response;
}

function getUserInfo(){
	$.ajax({
        beforeSend: function (xhr) {
            if ($("#login").val() != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/user/emails",
        async:false,
        dataType:'json',
        success: function(success)
        {        
        	userEmail = success;
        }
    });
}

function getSignedOff(){
	$.ajax({
        beforeSend: function (xhr) {
            if ($("#login").val() != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/users/"+userName,
        async:false,
        dataType:'json',
        success: function(success)
        {
        	signedOff = success.name;
        }
    });
}

function addSignedOff(){
	$.when(getUserInfo()).done(function(){
		$.when(getSignedOff()).done(function(){
			$('#commitMessage').val($('#commitMessage').val() + "\n\nSigned-off-by: "+signedOff+" <"+userEmail+">");
		});
	});
	resizeTextarea($('#commitMessage'));
}

function removeSignedOff(){
	$('#commitMessage').val(commitMessage);	
	resizeTextarea($('#commitMessage'));
}

function resizeTextarea(element){
	var nLines = element.val().split('\n').length + 1;
	element.attr('rows', nLines);
}

function showComment(element){
	// Display the original comment
	if (showcomment == true){		
		showcomment = false;
		element.text("Show original comment");
	}
	else{
		// Show the comment updated in user's repo
		showcomment = true;
		element.text("Comment changed in "+githubRepo+" / "+branchName);
	}
	var parent = element.parent().next(".description");		
	var textarea = parent.children('#fileContent');
	var text = textarea.val();	
	var preSave = parent.children('#preSave');	
	textarea.val(preSave.text());
	preSave.text(text);
	// Resize edit box
	textarea.height(textarea.prop("scrollHeight"));
	resizeTextarea(textarea);
}
