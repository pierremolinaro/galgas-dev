#!/bin/sh
cd `dirname $0` && time make -j 2 -f makefile64 --warn-undefined-variables all
