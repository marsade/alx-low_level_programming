#!/bin/sh
gcc -c -Wall -pedantic -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
