# hal-core-2.0

Hal-core-2.0 is derived from hal-core.

This version is forged into a cmake project.

1 	Install dependencies :

    $ ./deps

2 	Configure some filepath's :

    $ ./configure

3 	Build and install 

	*(Note: will install files inside your git clone dir) :

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make
    $ make install

4 	Set permissions to install kernel modules.

    $ cd bin
    $ ./setroot
    $ ./setdir

5 	Run :

    $ cd bin
    $ ./runtest




