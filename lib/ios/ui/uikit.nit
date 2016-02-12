# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# File generated by objcwrapper
#
# Partial wrapper of basic UIKit services.
module uikit

import cocoa::foundation
import ios

# Rectangular area on the screen
extern class UIView in "ObjC" `{ UIView * `}
	super NSObject

	new in "ObjC" `{ return [[UIView alloc] initWithFrame: [[UIScreen mainScreen] applicationFrame]]; `}

	# Wraps: `UIView.addSubview`
	fun add_subview(view: UIView) in "ObjC" `{
		[self addSubview: view];
	`}

	# Wraps: `UIView.removeFromSuperview`
	fun remove_from_superview in "ObjC" `{
		[self removeFromSuperview];
	`}

	# Wraps: `UIView.sizeToFit`
	fun size_to_fit in "ObjC" `{
		[self sizeToFit];
	`}

	# Wraps: `UIView.frame =`
	fun set_frame(x, y, w, h: Float) in "ObjC" `{
		self.frame = CGRectMake(x, y, w, h);
	`}

	# Wraps: `UIView.bounds =`
	fun set_bounds(x, y, w, h: Float) in "ObjC" `{
		self.bounds = CGRectMake(x, y, w, h);
	`}

	# Wraps: `UIView.center =`
	fun set_center(x, y: Float) in "ObjC" `{
		self.center = CGPointMake(x, y);
	`}

	# Wraps: `UIView.userInteractionEnabled =`
	fun user_interaction_enabled=(value: Bool) in "ObjC" `{
		self.userInteractionEnabled = value;
	`}

	# Wraps: `UIView.translatesAutoresizingMaskIntoConstraints =`
	fun translates_autoresizing_mask_into_constraits=(value: Bool) in "ObjC" `{
		self.translatesAutoresizingMaskIntoConstraints = value;
	`}

	# Wraps: `UIView.backgroundColor =`
	fun background_color=(color: UIColor) in "ObjC" `{
		self.backgroundColor = color;
	`}

	# Wraps: `[self viewPrintFormatter]`
	#fun view_print_formatter: UIViewPrintFormatter in "ObjC" `{
	#return [self viewPrintFormatter];
	#`}

	# Wraps: `[self drawRect:(CGRect)rect forViewPrintFormatter:(UIViewPrintFormatter)formatter]`
	#fun draw_rect_for_view_print_formatter(rect: CGRect, formatter: UIViewPrintFormatter) in "ObjC" `{
	#	[self drawRect: rect forViewPrintFormatter: formatter];
	#`}
end

# Coordinates an app displays on a device screen
extern class UIWindow in "ObjC" `{ UIWindow * `}
	super UIView

	new in "ObjC" `{ return [[UIWindow alloc] initWithFrame: [[UIScreen mainScreen] bounds]]; `}

	# Wraps: `[self makeKeyAndVisible]`
	fun make_key_and_visible in "ObjC" `{
		[self makeKeyAndVisible];
	`}
end

# Base class for contorl objects
extern class UIControl in "ObjC" `{ UIControl * `}
	super UIView

	# Wraps: `self.enabled`
	fun enabled: Bool in "ObjC" `{
		return self.enabled;
	`}

	# Wraps: `self.enabled =`
	fun enabled=(enabled: Bool) in "ObjC" `{
		self.enabled = enabled;
	`}
end

# Button on the touch screen
extern class UIButton in "ObjC" `{ UIButton * `}
	super UIControl

	new(kind: UIButtonType) in "ObjC" `{ return [UIButton buttonWithType: kind]; `}

	# Wraps: `[self titleLabel]`
	fun title_label: UILabel in "ObjC" `{
		return [self titleLabel];
	`}

	# Wraps: `[self setTitle forState]`
	fun title=(text: NSString) in "ObjC" `{
		[self setTitle:text forState:UIControlStateNormal];
	`}

	# Wraps: `[self currentTitle]`
	fun current_title: NSString in "ObjC" `{
		return [self currentTitle];
	`}
end

# Style of `UIButton`
extern class UIButtonType in "ObjC" `{ UIButtonType `}
	new custom in "ObjC" `{ return UIButtonTypeCustom; `}
	new system in "ObjC" `{ return UIButtonTypeSystem; `}
	new detail_disclosure in "ObjC" `{ return UIButtonTypeDetailDisclosure; `}
	new info_light in "ObjC" `{ return UIButtonTypeInfoLight; `}
	new info_dark in "ObjC" `{ return UIButtonTypeInfoDark; `}
	new contact_add in "ObjC" `{ return UIButtonTypeContactAdd; `}
	new rounded_rect in "ObjC" `{ return UIButtonTypeRoundedRect; `}
end

# Read-only text view
extern class UILabel in "ObjC" `{ UILabel * `}
	super UIView

	new in "ObjC" `{ return [[UILabel alloc] init]; `}

	# Wraps: `UILabel.text`
	fun text: NSString in "ObjC" `{
		return [self text];
	`}

	# Wraps: `UILabel.text`
	fun text=(text: NSString) in "ObjC" `{
		self.text = text;
	`}

	# Wraps: `UILabel.font`
	#fun font: UIFont in "ObjC" `{
	#	return [self font];
	#`}

	# Wraps: `UILabel.textColor`
	fun text_color: UIColor in "ObjC" `{
		return [self textColor];
	`}

	# Wraps: `UILabel.shadowColor`
	fun shadow_color: UIColor in "ObjC" `{
		return [self shadowColor];
	`}

	# Wraps: `UILabel.shadowOffset`
	#fun shadow_offset: CGSize in "ObjC" `{
	#	return [self shadowOffset];
	#`}

	# Wraps: `UILabel.textAlignment`
	#fun text_alignment: NSTextAlignment in "ObjC" `{
	#	return [self textAlignment];
	#`}

	# Wraps: `UILabel.lineBreakMode`
	#fun line_break_mode: NSLineBreakMode in "ObjC" `{
	#	return [self lineBreakMode];
	#`}

	# Wraps: `UILabel.attributedText`
	#fun attributed_text: NSAttributedString in "ObjC" `{
	#	return [self attributedText];
	#`}

	# Wraps: `UILabel.highlightedTextColor`
	fun highlighted_text_color: UIColor in "ObjC" `{
		return [self highlightedTextColor];
	`}

	# Wraps: `UILabel.highlighted`
	#fun highlighted: Bool in "ObjC" `{
	#	return [self highlighted];
	#`}

	# Wraps: `UILabel.userInteractionEnabled`
	#fun user_interaction_enabled: Bool in "ObjC" `{
	#	return [self userInteractionEnabled];
	#`}

	# Wraps: `UILabel.enabled`
	#fun enabled: Bool in "ObjC" `{
	#	return [self enabled];
	#`}

	# Wraps: `UILabel.numberOfLines`
	fun number_of_lines: Int in "ObjC" `{
		return [self numberOfLines];
	`}

	# Wraps: `UILabel.adjustsFontSizeToFitWidth`
	fun adjusts_font_size_to_fit_width: Bool in "ObjC" `{
		return [self adjustsFontSizeToFitWidth];
	`}

	# Wraps: `UILabel.adjustsLetterSpacingToFitWidth`
	# Depricated
	#fun adjusts_letter_spacing_to_fit_width: Bool in "ObjC" `{
	#	return [self adjustsLetterSpacingToFitWidth];
	#`}

	# Wraps: `UILabel.minimumFontSize`
	# Depricated
	#fun minimum_font_size: Float in "ObjC" `{
	#	return [self minimumFontSize];
	#`}

	# Wraps: `UILabel.baselineAdjustment`
	#fun baseline_adjustment: UIBaselineAdjustment in "ObjC" `{
	#	return [self baselineAdjustment];
	#`}

	# Wraps: `UILabel.minimumScaleFactor`
	fun minimum_scale_factor: Float in "ObjC" `{
		return [self minimumScaleFactor];
	`}

	# Wraps: `UILabel.preferredMaxLayoutWidth`
	fun preferred_max_layout_width: Float in "ObjC" `{
		return [self preferredMaxLayoutWidth];
	`}

	# Wraps: `[self textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines]`
	#fun text_rect_for_bounds_limited_to_number_of_lines(bounds: CGRect, number_of_lines: Int): CGRect in "ObjC" `{
	#	return [self textRectForBounds: bounds limitedToNumberOfLines: number_of_lines];
	#`}

	# Wraps: `[self drawTextInRect:(CGRect)rect]`
	#fun draw_text_in_rect(rect: CGRect) in "ObjC" `{
	#	[self drawTextInRect: rect];
	#`}
end

# Color data with opacity
extern class UIColor in "ObjC" `{ UIColor * `}
	super NSObject

	# Wraps: `[self initWithWhite:(CGFloat)white alpha:(CGFloat)alpha]`
	new init_with_white_alpha(white, alpha: Float) in "ObjC" `{
		return [[UIColor alloc] initWithWhite: white alpha: alpha];
	`}

	# Wraps: `[self initWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha]`
	new init_with_hue_saturation_brightness_alpha(hue, saturation, brightness, alpha: Float) in "ObjC" `{
		return [[UIColor alloc] initWithHue: hue saturation: saturation brightness: brightness alpha: alpha];
	`}

	# Wraps: `[self initWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha]`
	new init_with_red_green_blue_alpha(red, green, blue, alpha: Float) in "ObjC" `{
		return [[UIColor alloc] initWithRed: red green: green blue: blue alpha: alpha];
	`}

	# Wraps: `[self initWithCGColor:(CGColorRef)cgColor]`
	#new init_with_cg_color(cg_color: CGColorRef) in "ObjC" `{
	#	return [[UIColor alloc] initWithCGColor: cg_color];
	#`}

	# Wraps: `[self initWithPatternImage:(UIImage)image]`
	#new init_with_pattern_image(image: UIImage) in "ObjC" `{
	#	return [[UIColor alloc] initWithPatternImage: image];
	#`}

	# Wraps: `[self initWithCIColor:(CIColor)ciColor]`
	#new init_with_ci_color(ci_color: CIColor) in "ObjC" `{
	#	return [[UIColor alloc] initWithCIColor: ci_color];
	#`}

	# Wraps: `[UIColor blackColor]`
	new black_color in "ObjC" `{ return [UIColor blackColor]; `}

	# Wraps: `[UIColor darkGrayColor]`
	new dark_gray_color in "ObjC" `{ return [UIColor darkGrayColor]; `}

	# Wraps: `[UIColor lightGrayColor]`
	new light_gray_color in "ObjC" `{ return [UIColor lightGrayColor]; `}

	# Wraps: `[UIColor whiteColor]`
	new white_color in "ObjC" `{ return [UIColor whiteColor]; `}

	# Wraps: `[UIColor grayColor]`
	new gray_color in "ObjC" `{ return [UIColor grayColor]; `}

	# Wraps: `[UIColor redColor]`
	new red_color in "ObjC" `{ return [UIColor redColor]; `}

	# Wraps: `[UIColor greenColor]`
	new green_color in "ObjC" `{ return [UIColor greenColor]; `}

	# Wraps: `[UIColor blueColor]`
	new blue_color in "ObjC" `{ return [UIColor blueColor]; `}

	# Wraps: `[UIColor cyanColor]`
	new cyan_color in "ObjC" `{ return [UIColor cyanColor]; `}

	# Wraps: `[UIColor yellowColor]`
	new yellow_color in "ObjC" `{ return [UIColor yellowColor]; `}

	# Wraps: `[UIColor magentaColor]`
	new magenta_color in "ObjC" `{ return [UIColor magentaColor]; `}

	# Wraps: `[UIColor orangeColor]`
	new orange_color in "ObjC" `{ return [UIColor orangeColor]; `}

	# Wraps: `[UIColor purpleColor]`
	new purple_color in "ObjC" `{ return [UIColor purpleColor]; `}

	# Wraps: `[UIColor brownColor]`
	new brown_color in "ObjC" `{ return [UIColor brownColor]; `}

	# Wraps: `[UIColor clearColor]`
	new clear_color in "ObjC" `{ return [UIColor clearColor]; `}

	# Wraps: `UIColor.CGColor`
	#fun cg_color: CGColorRef in "ObjC" `{
	#	return [self CGColor];
	#`}

	# Wraps: `UIColor.CIColor`
	#fun ci_color: CIColor in "ObjC" `{
	#	return [self CIColor];
	#`}

	# Wraps: `[self set]`
	fun set in "ObjC" `{ [self set]; `}

	# Wraps: `[self setFill]`
	fun set_fill in "ObjC" `{ [self setFill]; `}

	# Wraps: `[self setStroke]`
	fun set_stroke in "ObjC" `{ [self setStroke]; `}

	# Wraps: `[self getWhite:(CGFloat)white alpha:(CGFloat)alpha]`
	#fun get_white_alpha(white: Float, alpha: Float): Bool in "ObjC" `{
	#	return [self getWhite: white alpha: alpha];
	#`}

	# Wraps: `[self getHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha]`
	#fun get_hue_saturation_brightness_alpha(hue: Float, saturation: Float, brightness: Float, alpha: Float): Bool in "ObjC" `{
	#	return [self getHue: hue saturation: saturation brightness: brightness alpha: alpha];
	#`}

	# Wraps: `[self getRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha]`
	#fun get_red_green_blue_alpha(red: Float, green: Float, blue: Float, alpha: Float): Bool in "ObjC" `{
	#	return [self getRed: red green: green blue: blue alpha: alpha];
	#`}

	# Wraps: `[self colorWithAlphaComponent:(CGFloat)alpha]`
	fun color_with_alpha_component(alpha: Float): UIColor in "ObjC" `{
		return [self colorWithAlphaComponent: alpha];
	`}

	# Wraps: `[self CGColor]`
	#fun cg_color: CGColorRef in "ObjC" `{
	#	return [self CGColor];
	#`}
end

# Wraps: `[UIColor colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha]`
#fun ui_color_color_with_white_alpha(white: Float, alpha: Float): UIColor in "ObjC" `{
#	return [UIColor colorWithWhite: white alpha: alpha];
#`}

# Wraps: `[UIColor colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha]`
#fun ui_color_color_with_hue_saturation_brightness_alpha(hue: Float, saturation: Float, brightness: Float, alpha: Float): UIColor in "ObjC" `{
#	return [UIColor colorWithHue: hue saturation: saturation brightness: brightness alpha: alpha];
#`}

# Wraps: `[UIColor colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha]`
#fun ui_color_color_with_red_green_blue_alpha(red: Float, green: Float, blue: Float, alpha: Float): UIColor in "ObjC" `{
#	return [UIColor colorWithRed: red green: green blue: blue alpha: alpha];
#`}

# Wraps: `[UIColor colorWithCGColor:(CGColorRef)cgColor]`
#fun ui_color_color_with_cg_color(cg_color: CGColorRef): UIColor in "ObjC" `{
#	return [UIColor colorWithCGColor: cg_color];
#`}

# Wraps: `[UIColor colorWithPatternImage:(UIImage)image]`
#fun ui_color_color_with_pattern_image(image: UIImage): UIColor in "ObjC" `{
#	return [UIColor colorWithPatternImage: image];
#`}

# Wraps: `[UIColor colorWithCIColor:(CIColor)ciColor]`
#fun ui_color_color_with_ci_color(ci_color: CIColor): UIColor in "ObjC" `{
#	return [UIColor colorWithCIColor: ci_color];
#`}

# Editable text view
extern class UITextField in "ObjC" `{ UITextField * `}
	super UIControl

	new in "ObjC" `{ return [[UITextField alloc] initWithFrame: [[UIScreen mainScreen] applicationFrame]]; `}

	# Wraps: `UITextField.text`
	fun text: NSString in "ObjC" `{
		return [self text];
	`}

	# Wraps: `UITextField.text`
	fun text=(text: NSString) in "ObjC" `{
		self.text = text;
	`}
end

# Lays out a collection of views in either a column or a row
extern class UIStackView in "ObjC" `{ UIStackView * `}
	super UIView

	new in "ObjC" `{
		return [[UIStackView alloc] initWithArrangedSubviews: [NSArray array]];
	`}

	# Wraps: `[self addArrangedSubview:(UIView)view]`
	fun add_arranged_subview(view: UIView) in "ObjC" `{
		[self addArrangedSubview: view];
	`}

	# Wraps: `[self removeArrangedSubview:(UIView)view]`
	fun remove_arranged_subview(view: UIView) in "ObjC" `{
		[self removeArrangedSubview: view];
	`}

	# Wraps: `[self insertArrangedSubview:(UIView)view atIndex:(NSUInteger)stackIndex]`
	fun insert_arranged_subview_at_index(view: UIView, stack_index: Int) in "ObjC" `{
		[self insertArrangedSubview: view atIndex: stack_index];
	`}

	# Wraps: `[self initWithArrangedSubviews:(NSArray)views]`
	#new init_with_arranged_subviews(views: NSArray) in "ObjC" `{
	#	return [[UIStackView alloc] initWithArrangedSubviews: views];
	#`}

	# Wraps: `UIStackView.arrangedSubviews`
	#fun arranged_subviews: NSArray in "ObjC" `{
	#	return [self arrangedSubviews];
	#`}

	# Wraps: `UIStackView.axis`
	fun axis: UILayoutConstraintAxis in "ObjC" `{ return [self axis]; `}

	# Wraps: `UIStackView.axis =`
	fun axis=(value: UILayoutConstraintAxis) in "ObjC" `{ self.axis = value; `}

	# Wraps: `UIStackView.distribution`
	fun distribution: UIStackViewDistribution in "ObjC" `{ return [self distribution]; `}

	# Wraps: `UIStackView.distribution =`
	fun distribution=(value: UIStackViewDistribution) in "ObjC" `{ self.distribution = value; `}

	# Wraps: `UIStackView.alignment`
	fun alignment: UIStackViewAlignment in "ObjC" `{ return [self alignment]; `}

	# Wraps: `UIStackView.alignment =`
	fun alignment=(value: UIStackViewAlignment) in "ObjC" `{ self.alignment = value; `}

	# Wraps: `UIStackView.spacing`
	fun spacing: Float in "ObjC" `{ return [self spacing]; `}

	# Wraps: `UIStackView.spacing =`
	fun spacing=(value: Float) in "ObjC" `{ self.spacing = value; `}

	# Wraps: `UIStackView.baselineRelativeArrangement`
	#fun baseline_relative_arrangement: Bool in "ObjC" `{
	#	return [self baselineRelativeArrangement];
	#`}

	# Wraps: `UIStackView.layoutMarginsRelativeArrangement`
	#fun layout_margins_relative_arrangement: Bool in "ObjC" `{
	#	return [self layoutMarginsRelativeArrangement];
	#`}
end

# Defines the orientation of the arranged views in `UIStackView`
extern class UILayoutConstraintAxis in "ObjC" `{ NSInteger `}
	new horizontal in "ObjC" `{ return UILayoutConstraintAxisHorizontal; `}
	new vertical in "ObjC" `{ return UILayoutConstraintAxisVertical; `}
end

# Defines the size and position of the arranged views along the `UIStackView`'s axis
extern class UIStackViewDistribution in "ObjC" `{ NSInteger `}
	new horizontal in "ObjC" `{ return UILayoutConstraintAxisHorizontal; `}
    new fill in "ObjC" `{ return UIStackViewDistributionFill; `}
    new fill_equally in "ObjC" `{ return UIStackViewDistributionFillEqually; `}
    new fill_proportionally in "ObjC" `{ return UIStackViewDistributionFillProportionally; `}
    new equal_spacing in "ObjC" `{ return UIStackViewDistributionEqualSpacing; `}
    new equal_centering in "ObjC" `{ return UIStackViewDistributionEqualCentering; `}
end

# Defines the layout of the arranged views perpendicular to the `UIStackView`'s axis
extern class UIStackViewAlignment in "ObjC" `{ NSInteger `}
    new fill in "ObjC" `{ return UIStackViewAlignmentFill; `}
    new leading in "ObjC" `{ return UIStackViewAlignmentLeading; `}
    new top in "ObjC" `{ return UIStackViewAlignmentTop; `}
    new baseline in "ObjC" `{ return UIStackViewAlignmentFirstBaseline; `}
    new center in "ObjC" `{ return UIStackViewAlignmentCenter; `}
    new trailing in "ObjC" `{ return UIStackViewAlignmentTrailing; `}
    new bottom in "ObjC" `{ return UIStackViewAlignmentBottom; `}
    new last_baseline in "ObjC" `{ return UIStackViewAlignmentLastBaseline; `}
end

# View to display and edit hierarchical lists of information
extern class UITableView in "ObjC" `{ UITableView * `}
	super UIView

	# Wraps: `[self initWithFrame:(CGRect)frame style:(UITableViewStyle)style]`
	new (style: UITableViewStyle) in "ObjC" `{
		return [[UITableView alloc] initWithFrame: [[UIScreen mainScreen] bounds] style:style];
	`}

	# Wraps: `[self reloadData]`
	fun reload_data in "ObjC" `{ [self reloadData]; `}

	# Wraps: `self.autoresizingMask =`
	fun autoresizing_mask in "ObjC" `{
		self.autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
	`}

	# Wraps: `self.delegate =`
	fun delegate=(delegate: UITableViewDelegate) in "ObjC" `{ self.delegate = delegate; `}

	# Wraps: `self.dataSource =`
	fun data_source=(source: UITableViewDataSource) in "ObjC" `{ self.dataSource = source; `}

	# Wraps: `[self dequeueReusableCellWithIdentifier]`
	fun dequeue_reusable_cell_with_identifier(identifier: NSString): UITableViewCell in "ObjC" `{
		return [self dequeueReusableCellWithIdentifier:identifier];
	`}
end

# Delegate for a `UITableView` to configure selection, sections, cells and more
extern class UITableViewDelegate in "ObjC" `{ id<UITableViewDelegate> `}
	super NSObject
end

# Mediator the data model for a `UITableView`
extern class UITableViewDataSource in "ObjC" `{ id<UITableViewDataSource> `}
	super NSObject
end

# Cell of a `UITableViewCell`
extern class UITableViewCell in "ObjC" `{ UITableViewCell * `}
	super NSObject

	new (identifier: NSString) in "ObjC" `{
		return [[UITableViewCell alloc]
			initWithStyle:UITableViewCellStyleDefault
			reuseIdentifier:identifier];
	`}

	# Wraps: `[self textLabel]`
	fun text_label: UILabel in "ObjC" `{ return [self textLabel]; `}

	# Wraps: `[self contentView]`
	fun content_view: UIView in "ObjC" `{ return [self contentView]; `}
end

# Style of a `UITableView`
extern class UITableViewStyle in "ObjC" `{ UITableViewStyle* `}
	super NSObject

	new plain in "ObjC" `{ return UITableViewStylePlain; `}
	new grouped in "ObjC" `{ return UITableViewStyleGrouped; `}
end
