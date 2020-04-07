# QT-Linux-Test
This is a test of the Qt libraries for c++

currently, this program displays a simple X window using the QT libraries.

### compiling/running

#### dependencies:
* qt5 (latest verstion)
* build-essentials
* a simple x windows setup (any DE or WM capable of running qt applications)

#### instructions:
1. clone the repository
2. make the qmake project file (may or may not be included in repository, but it is usually recommented to recreate this on your own system): `qmake -project`
2. run `qmake` again, to create a makefile and a few other necessary files
3. `make` to make the executable
4. run the executable through the shell or your respective GUI.

### notes
This repo is not meant to be a fully fledged porgram, it is just meant to show some some things the Qt libraries (and my coding skills) can do in terms of GUI applications.

I code this project mainly on my main machine (Archlinux with KDE+X11), so some things may need changing for your own OS.



