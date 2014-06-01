#!/bin/sh
cd `dirname $0` && make -f makefile.mak --warn-undefined-variables all -j `sysctl -n hw.ncpu`
