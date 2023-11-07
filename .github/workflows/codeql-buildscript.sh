#!/usr/bin/env bash

ROOT_DIR=$PWD

cd "$ROOT_DIR/makefile-unix/"

./clean.py

./build+release.py
