#!/bin/bash
gcc -fPIC -c 101-make_me_win.c
gcc -shared -o 101-make_me_win.so 101-make_me_win.o
LD_PRELOAD=/$PWD/101-make_me_win.so ./gm 9 8 10 24 75 9
