CXX = g++
CXXFLAGS = -g -Wall -Wextra

invertir-secuencia: 1b-invertir-secuencia-main.o leer-vector-reales.o
	$(CXX) $(CXXFLAGS) -o invertir-secuencia 1b-invertir-secuencia-main.o leer-vector-reales.o

superiores-media: 2b-superiores-media-main.o leer-vector-reales.o
	$(CXX) $(CXXFLAGS) -o superiores-media 2b-superiores-media-main.o leer-vector-reales.o

2b-superiores-media-main.o: 2b-superiores-media-main.cpp leer-vector-reales.hpp
	$(CXX) $(CXXFLAGS) -o 2b-superiores-media-main.o -c 2b-superiores-media-main.cpp

leer-vector-reales.o: leer-vector-reales.cpp leer-vector-reales.hpp