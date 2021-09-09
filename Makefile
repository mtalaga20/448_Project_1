battleship: main.o Executive.o gameBoard.o
	g++ -g -std=c++11 -Wall main.o Executive.o gameBoard.o -o battleship

main.o: main.cpp Executive.hpp myDefines.h
	g++ -g -std=c++11 -Wall -c main.cpp

Executive.o: Executive.cpp Executive.hpp myDefines.h
	g++ -g -std=c++11 -Wall -c Executive.cpp

gameBoard.o: GameBoard.cpp GameBoard.hpp myDefines.h
	g++ -g -std=c++11 -Wall -c GameBoard.cpp

clean:
	rm *.o battleship

run:
	./battleship
