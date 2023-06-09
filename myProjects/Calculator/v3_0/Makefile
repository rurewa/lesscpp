FLAGS = -g -O2 -std=c++17

all: calc

test: calc
	python ./test.py

calc: calc.o main.o
	g++ ${FLAGS} calc.o main.o -o calc

calc.o: calc.cpp calc.h
	g++ ${FLAGS} -c -o calc.o calc.cpp

main.o: main.cpp calc.h
	g++ ${FLAGS} -c -o main.o main.cpp

data: gen_data.cpp
	g++ ${FLAGS} -o gen_data gen_data.cpp
