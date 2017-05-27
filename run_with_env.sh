#!/bin/bash

# Execute bazel with TEST_LIB to enable finding test_lib.

cd $(dirname $BASH_SOURCE)
export TEST_LIB=$PWD/test_lib
bazel run //example
