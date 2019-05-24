main.out: main.o Carro.o Motor.o Pintura.o Chasis.o
	g++ main.o Carro.o Motor.o Pintura.o -o main.out
	./programa
main.o: main.cpp Carro.h Motor.h Pintura.h Chasis.h
	g++ -c main.cpp

Chasis.o: Chasis.h Chasis.cpp
	g++ -c Chasis.cpp

Pintura.o: Pintura.h Pintura.cpp
	g++ -c Pintura.cpp

Motor.o: Motor.h Motor.cpp
	g++ -c Motor.cpp

Carro.o: Carro.h Carro.cpp Motor.h
	g++ -c Carro.cpp
