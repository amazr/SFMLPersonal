#!/bin/bash

g++ -c RandomShape.cpp
g++ RandomShape.o -o RandomShape-app -lsfml-graphics -lsfml-window -lsfml-system
