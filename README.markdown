Description
-----------
Qualia is a free software library for embedded AVR agent-based systems written in simple C++.
The software is licensed under the Gnu GPL version 3 (see LICENSE file).

Version
-------
Current version is 0.2.

Authors
-------

Head developer:
Sofian Audry
info(@)sofianaudry(.)com

Copyright
---------

Copyright (c) 2011-2012 Sofian Audry (the main author)
This software library is distributed under the Gnu GPL version 3. Please refer to LICENSE file for details.

This software library includes code from the following sources:

GALib : library of genetic algorithm components (BSD License)
  Copyright (c) 1995-1996 Massachusetts Institute of Technology (MIT)
  Copyright (c) 1996-2005 Matthew Wall (the Author)

Thanks
------

This project is realized with the support of CINQ as part of the Emerge research project with 
LabXmodal (Concordia Univeristy, Montr�al), IDMIL (McGill University, Montr�al) and 
Moment Factory (Montr�al).

Objectives
----------

1. Allow to easily switch between different environments
 * Two modes: simulation (computer) vs embedded (AVR).
 * The agent should stay the same.
 * Interchangeable environment simulation vs embedded
 * Easy switch between the two modes

2. Well-managed on AVR chips
 * Low memory trace (Flash and SRAM)
 * Static allocation

3. Modular
 * Agent can stay the same while environments are exchanged
 * eg. easy switch of reward function (reinforcement learning)

4. Multi-paradigm
 * Procedural
 * FSM
 * Reinforcement learning

Compiling
---------

Standard build (eg. on i386 platforms):
$ scons

Build for AVR:
$ scons --avr

Build for Arduino:
$ scons --arduino

Cleaning up (example):
$ scons --avr --clean

To compile examples, go to the example folder and run scons. The qualia library needs to be compiled first.

Installing
----------
 
See INSTALL file for installation procedure on standard (PC) platform.
 