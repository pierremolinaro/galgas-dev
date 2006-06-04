#!/bin/sh
cd `dirname $0` && time make -f makefiles/makefile --warn-undefined-variables all
