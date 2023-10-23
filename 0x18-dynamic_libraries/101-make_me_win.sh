#!/bin/bash
wget -P .. https://github.com/pilatech/alx-low_level_programming/blob/072d48a68d0447d6983ec3ad09c1215df24eae65/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
