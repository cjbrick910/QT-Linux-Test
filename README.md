# QT-Linux-Test

A test of the Qt libraries for c++

### compiling/running

#### dependencies:
* qt5 (latest verstion)
* build-essentials
* a gui setup (usually just xorg + a DE or WM that can run Qt applications)

#### instructions:
1. clone the repository
2. make the qmake project file (may or may not be included in repository, but it is usually recommented to recreate this on your own system): `qmake -project`
3. add `QT += widgets` to the "SOURCES" section of the project file (.pro extension) in order for the application to compile correctly.
4. run `qmake` again, to create a makefile and a few other necessary files
5. `make` to make the executable
6. run the executable through the shell or your respective GUI.

### notes
This repo is not meant to be a fully fledged porgram, it is just meant to show some some things the Qt libraries (and my coding skills) can do in terms of GUI applications.

I code this project on my main machine (Archlinux with KDE+X11), so some things may need changing for your own OS.



