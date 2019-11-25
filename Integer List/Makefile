list: main.o list.o
	g++ main.o list.o -o list
	rm main.o list.o
main.o: main.cpp
	g++ -c main.cpp
list.o: list.cpp list.hpp
	g++ -c list.cpp
clean:
	rm -rf *.o list
