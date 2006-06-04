#!/bin/sh
cd `dirname $0` && time make -f makefiles/makefile64 --warn-undefined-variables all
