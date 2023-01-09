# hal-core-2.0

Hal-core-2.0 is derived from hal-core.

Hal-core is a tool to run real hardware like stepper motors, servo motors,
machines, robots etc.

Hal-core supports hardware like parport, ethercat, mesa, rasperri pi, etc.

To build the standard version :
	
	$ ./vendors
	$ ./configure
	
To build with opencascade & kdl kinematics, edit the cmakelists.txt to your needs.
To open the projects, just open the top cmakelists.txt file in a code editor like qt.

News :

    - Forged into a cmake project, wich was a lot of work.
        In code editor this give's you everything you need.
    
    - Robot example with :
        Inverse kinematic solver sequence.
        Cartesian move
        Joint move
        Euler move
        Tool move
        Continious move

    - Cmake creates the realtime components from c & c++ mixed language !

    - Ethercat component build by cmake.
    
Notes :

    To recompile, cd build, make && make install

    

![screen](https://github.com/grotius-cnc/hal-core-2.0/blob/main/src/hal/components/opencascade/screen.jpg)









