#!/bin/sh
cd `dirname $0` && time make -j 2 --warn-undefined-variables all
