#!/bin/sh
cd `dirname $0` && time make -f makefile.mak --warn-undefined-variables clean
