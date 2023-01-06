#!/bin/bash

# Create the static library
ar -rc liball.a *.c

# Create the index for the static library
ranlib liball.a

# Compile all .c files in the current directory, treating all warning messages as errors, and stopping after the compilation stage (i.e., not linking the object files into an executable)
gcc -c *.c
