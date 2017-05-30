#!/bin/bash

echo 'We will now compile arr.cpp into arr.o'
g++ -c -O0 arr.cpp
echo 'The content of arr.cpp is given as follows'
echo '===== arr.cpp ===='
cat arr.cpp
echo '=================='
echo 'The template is instantiated once for each type'
echo 'We expect to see the template be instantiated three times'
echo '===== nm arr.o ===='
nm arr.o
echo '==================='
echo 'Now we see the template is instantiated 3 times'
echo 'Notice the size of array becomes part of tempate instantiation'
