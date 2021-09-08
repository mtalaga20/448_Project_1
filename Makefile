battleship: main.o Executive.o gameBoard.o
	g++ -g -std=c++11 -Wall main.o Executive.o -o battleship

main.o: main.cpp Executive.hpp
	g++ -g -std=c++11 -Wall -c main.cpp

Executive.o: Executive.cpp Executive.hpp gameBoard.hpp
	g++ -g -std=c++11 -Wall -c Executive.cpp

gameBoard.o: gameBoard.cpp gameBoard.hpp
	g++ -g -std=c++11 -Wall -c gameBoard.cpp

clean:
	rm *.o battleship

run:
	./battleship
