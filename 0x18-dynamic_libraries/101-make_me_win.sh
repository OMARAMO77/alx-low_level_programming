#!/bin/bash
wget -P .. https://github.com/OMARAMO77/alx-low_level_programming/raw/master/0x18-dynamic_libraries/omaramo.so
export LD_PRELOAD="$PWD/../omaramo.so"
