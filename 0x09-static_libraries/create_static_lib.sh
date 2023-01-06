#!/bin/bash

gcc -c *.c

# Create the static library
ar -rc liball.a *.o

# Create the index for the static library
ranlib liball.a
