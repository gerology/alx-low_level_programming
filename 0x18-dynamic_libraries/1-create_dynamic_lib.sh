#!/bin/bash
gcc -c *.c -fPIC
gcc -shared *.c -o liball.so
