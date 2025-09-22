/******************************************************************************
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30 de octubre de 2020
 * Resumen: Solución al problema 1 planteado en la clase de problemas
 *          del tema 9 (vectores).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 1-positivos.cpp -o 1-positivos
 *       y ejecutarse en Windows a través de la orden
 *           .\1-positivos.exe
 *       o en Linux y macOS
 *           ./1-positivos
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que calcula y escribe en pantalla cuántos datos del vector
 * {1, -5, -8, 6, 8, -3, -4, -6, 6, -1, 5, -8, 1, 9, 5, -9, 5, 8, 9, -2, -9}
 * son estrictamente positivos.
 */
int main() {
    const unsigned NUM_DATOS = 21;
    const int VECTOR[NUM_DATOS] = {1, -5, -8, 6, 8, -3, -4, -6, 6, -1, 5, -8,
            1, 9, 5, -9, 5, 8, 9, -2, -9};

    unsigned cuenta = 0;
    for (unsigned i = 0; i < NUM_DATOS; i++) {
        if (VECTOR[i] > 0) {
            cuenta++;
        }
    }
        
    cout << "El vector tiene " << cuenta << " datos estrictamente positivos."
         << endl;
    return 0;
}
