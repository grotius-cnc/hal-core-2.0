# hal-core-2.0

Hal-core-2.0 is derived from hal-core.

This version is forged into a cmake project.

1. Install dependencies :

    $ sudo ./deps

2. Configure step A, from ~/hal-core-2.0 dir/src dir :

	*(Note: this step has to be modified. We could
	minimize this step, files like Makefile.inc etc
	could be removed)

	$ cd src
	$ ./configure --enable-non-distributable=yes
	$ cd ..
	
3. Configure step B, from ~/hal-core-2.0 dir :	

    $ ./configure ~/hal-core-2.0 dir

4. Build and install 

	*(Note: will install files inside your git clone dir) :

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make
    $ make install
    $ cd ..

5. Set permissions to install kernel modules.

    $ cd bin
    $ ./setroot
    $ ./setdir

6. Run :

    $ ./runtest




