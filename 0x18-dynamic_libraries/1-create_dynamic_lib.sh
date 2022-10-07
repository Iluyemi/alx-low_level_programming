#!/bin/bash
gcc *.c -o -fPIC
gcc *.o -shared -c liball.so
