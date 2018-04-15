a.out: sortowanie.o main.o testy.o
	g++ sortowanie.o main.o testy.o

sortowanie.o: sortowanie.cpp sortowanie.hh
	g++ -Wall -pedantic -c sortowanie.hh
	g++ -Wall -pedantic -c sortowanie.cpp

main.o: main.cpp
	g++ -Wall -pedantic -c main.cpp

testy.o: testy.cpp
	g++ -Wall -pedantic -c testy.cpp

clean:
	rm -f *.o test
