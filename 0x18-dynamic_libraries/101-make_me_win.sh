#!/bin/bash
wget -P .. https://raw.githubusercontent.com/thhvvv/alx-low_level_programming/master/0x18-dynamic_libraries/libhacks.so
export LD_PRELOAD="$PWD/../libhacks.so"
