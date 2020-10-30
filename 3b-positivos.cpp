/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30 de octubre de 2020
 * Resumen: Solución al problema 3b planteado en la clase de problemas
 *          del tema 9 (vectores).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Run Code de Visual Studio 
 *       Code, tal y como se hacía en las prácticas 1 y 2.
\******************************************************************************/
#include <iostream>
#include "datos-pruebas.hpp"
using namespace std;

/*
 * Pre:  El vector «v» tiene al menos «n» componentes.
 * Post: Ha devuelto el número de datos positivos almacenados en las
 *       primeras «n» componentes del vector «v».
 */
unsigned int numPositivos(const int v[], const unsigned int n) {
    unsigned int cuenta = 0;
    for (unsigned int i = 0; i < n; i++) {
        if (v[i] > 0) {
            cuenta++;
        }
    }
    return cuenta;
}

/*
 * Programa de prueba de la función «numPositivos» con los vectores definidos en
 * «datos-pruebas.hpp». Si el resultado de una prueba es correcto, escribe en la
 * pantalla true; en caso contrario, escribe en la pantalla false.
 */
int main() {
    cout << "Pruebas de la función «numPositivos»: " << endl;
    cout << boolalpha;
    cout << (numPositivos(VECTOR_0, 0) == 0) << endl;
    cout << (numPositivos(VECTOR_1, 1) == 1) << endl;
    cout << (numPositivos(VECTOR_2, 1) == 0) << endl;
    cout << (numPositivos(VECTOR_3, 2) == 1) << endl;
    cout << (numPositivos(VECTOR_4, 2) == 1) << endl;
    cout << (numPositivos(VECTOR_5, 6) == 3) << endl;
    cout << (numPositivos(VECTOR_6, 6) == 3) << endl;
}
