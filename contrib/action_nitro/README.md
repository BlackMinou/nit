# Guide complete pour les nouveaux avec Nit

1. Configurer votre système:

~~~
sudo apt-get install build-essential ccache libgc-dev graphviz libunwind-dev pkg-config libgles2-mesa-dev libsdl1.2-dev libsdl-image1.2-dev libsdl-ttf2.0-dev inkscape mpg123
~~~

2. Cloner la bonne branch pour le jeu et compiler Nit:
~~~
git clone http://github.com/xymus/nit
cd nit
git fetch origin action_nitro
git checkout action_nitro
make
~~~

3. Compiler le jeu:

~~~
cd contrib/action_nitro
make
~~~

4. Lancer le jeu:

~~~
bin/action_nitro
~~~

# Compile and run - For those used to Nit

1. Compile the Nit tools from the root of this repository.
   Refer to the root README file for directions.

2. Install the packages requisited by _gamnit_.
   See the list in `../../lib/gamnit/README.md`.

3. Compile the game with a simple call to `make` from this folder.

4. Run with `bin/action_nitro`.

# Art

* Character art created by jeremygooch under CC-BY 3.0.
* City skyline created by Alucard
* Helicopter model by SpriteAttack under CC-BY-SA 3.0.
* Particles and others created by kenny.nl under CC0.
* Font Armalite Rifle by Vic Fieger
* Splash backgroud credit NASA
* 3D model of ISS credit NASA and ISS WebGL project
