CXX = g++
CXXFLAGS = -Og -Wall -Wextra

invertir-secuencia: 2b-invertir-secuencia-main.o leer-vector-reales.o
	$(CXX) $(CXXFLAGS) -o invertir-secuencia 2b-invertir-secuencia-main.o leer-vector-reales.o

superiores-media: 3b-superiores-media-main.o leer-vector-reales.o
	$(CXX) $(CXXFLAGS) -o superiores-media 3b-superiores-media-main.o leer-vector-reales.o

2b-superiores-media-main.o: 3b-superiores-media-main.cpp leer-vector-reales.hpp
	$(CXX) $(CXXFLAGS) -o 3b-superiores-media-main.o -c 3b-superiores-media-main.cpp

leer-vector-reales.o: leer-vector-reales.cpp leer-vector-reales.hpp