#!/bin/bash
#this is a build and run script for the program myCopier.cpp

g++ myCopier.cpp -o myCopier

./myCopier $1 $2
