#! /bin/bash

executable=$1

rm -rf *.o
gcc -c *.c
gcc -o $1 *.c
rm -rf *.o
