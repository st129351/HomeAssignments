Молодец, что сам написал Makefile!

prog: hello.o main.o
	g++ main.cpp hello.cpp -o prog
hello.o: hello.cpp
	g++ -c hello.cpp
main.o: main.cpp
	g++ -c main.cpp
clean: 
	rm -rf prog *.o
