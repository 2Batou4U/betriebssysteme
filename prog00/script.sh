#!/bin/bash
# Aufgabe 2 Skript
if [ -z "$1" ]
then
  echo "Fehlender Parameter"
  exit 1
elif [ "$1" == "compile" ]
then
  mkdir -p bin
  gcc -std=c11 -Wall -Wextra -Werror -o bin/game main.c guess.c
  echo Compile
elif [ "$1" == "clean" ]
then
  rm -rf bin
  echo Clean
else
  echo "Falscher Parameter"
  exit 2
fi