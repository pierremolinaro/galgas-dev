#!/usr/bin/env bash

ROOT_DIR=$PWD

cd "$ROOT_DIR/makefile-unix/"

python3 clean.py

python3 build+release.py
