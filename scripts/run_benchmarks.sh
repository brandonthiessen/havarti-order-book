#!/usr/bin/env bash

BUILD_DIR="$(dirname "$0")/../build"

for bench in "$BUILD_DIR"/bench_*; do
    [ -x "$bench" ] && "$bench"
done
