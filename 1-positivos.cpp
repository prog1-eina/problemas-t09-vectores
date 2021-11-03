/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30 de octubre de 2020
 * Resumen: Solución al problema 1 planteado en la clase de problemas
 *          del tema 9 (vectores).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Run Code de Visual Studio 
 *       Code, tal y como se hacía en las prácticas 1 y 2.
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que calcula y escribe en pantalla cuántos datos del vector
 * {1, -5, -8, 6, 8, -3, -4, -6, 6, -1, 5, -8, 1, 9, 5, -9, 5, 8, 9, -2, -9}
 * son estrictamente positivos.
 */
int main() {
    const unsigned NUM_DATOS = 21;
    const int VECTOR[NUM_DATOS] = {1, -5, -8, 6, 8, -3, -4, -6, 6, -1, 5, -8, 1,
            9, 5, -9, 5, 8, 9, -2, -9};

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
