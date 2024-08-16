#!/bin/bash

find . -name .gitignore | sed '/^$/ d; /#/ d' .gitignore
