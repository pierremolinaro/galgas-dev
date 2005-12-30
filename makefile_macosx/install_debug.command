#!/bin/sh
cd `dirname $0` && make all && sudo make install_debug
