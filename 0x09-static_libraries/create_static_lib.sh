#!/bin/sh
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ranlid liball.a
