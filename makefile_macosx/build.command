#!/bin/sh
cd `dirname $0` && time make -j  `sysctl -n hw.ncpu` --warn-undefined-variables all
