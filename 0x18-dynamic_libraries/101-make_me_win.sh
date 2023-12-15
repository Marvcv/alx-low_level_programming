#!/bin/bash
wget -P .. https://githubusercontent.com/Marvcv/alx-low_level_programmingi/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
