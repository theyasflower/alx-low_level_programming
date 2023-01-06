#!/bin/bash

# Create the static library
ar -rc liball.a *.c

# Create the index for the static library
ranlib liball.a

gcc -c *.c
