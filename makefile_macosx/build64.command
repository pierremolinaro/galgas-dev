#!/bin/sh
cd `dirname $0` && time make -f makefile64 --warn-undefined-variables all
