#!/bin/bash
gcc -Wall -pedantic -werror -wextra -c *.c
ar -rc liball.a *.o
ralib  liball.a
