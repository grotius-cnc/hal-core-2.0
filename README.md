# hal-core-2.0

Hal-core-2.0 is derived from hal-core.

This version is forged into a cmake project.

Install dependencies :

	sudo ./deps

Configure step A, from ~/hal-core-2.0 dir/src dir :

	*(Note: this step has to be modified. We could
	minimize this step, files like Makefile.inc etc
	could be removed)

	$ cd src
	$ ./configure --enable-non-distributable=yes
	$ cd ..
	
Configure step B, from ~/hal-core-2.0 dir :	

	$ ./configure 

Build and install 

	*(Note: will install files inside your git clone dir) :

	$ mkdir build
	$ cd build
	$ cmake ..
	$ make
	$ make install
	$ cd ..

Set permissions to install kernel modules.

	$ cd bin
	$ ./setroot
	$ ./setdir

Run :

	$ ./runtest




