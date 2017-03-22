Elo:Elo.o main.o
	g++ -o Elo Elo.o main.o

Elo.o:Elo.h Elo.cpp
	g++ -c Elo.cpp	

main.o:main.cpp Elo.h
	g++ -c main.cpp

clean:
	rm Elo main.o Elo.o


