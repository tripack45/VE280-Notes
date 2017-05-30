all : sum_even
sum_even : objects
	g++ -o run main.o even.o sum.o 
prod_odd : objects
	g++ -o run main.o prod.o odd.o 
clean :
	rm -f *.o && rm -f ./run
onestep : main.cpp even.cpp sum.cpp
	g++ -o run main.cpp even.cpp sum.cpp
objects : sum.cpp prod.cpp even.cpp odd.cpp main.cpp
	g++ -c sum.cpp && g++ -c prod.cpp
	g++ -c even.cpp && g++ -c odd.cpp
	g++ -c main.cpp


	