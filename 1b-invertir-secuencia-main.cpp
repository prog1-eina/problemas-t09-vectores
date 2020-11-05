/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 4 de noviembre de 2020
 * Resumen: Solución al problema 2.º planteado en la clase de problemas
 *          del tema 9 (vectores).
 * Nota: El código de esta versión está repartido en dos módulos. Para
 *       compilarlo, hay que ejecutar el comando
 *           make invertir-secuencia
 *       o, en Windows,
 *           mingw32-make invertir-secuencia
 *       o ejecutar la tarea "Compilar programa «invertir-secuencia»" de VSC.
 * 
 *       Para ejecutarlo, una vez compilado, hay que ejecutar el comando
 *           ./invertir-secuencia
 *       o, en Windows,
 *           .\invertir-secuencia.exe
 *       o ejectuar la tarea "Ejecutar programa «invertir-secuencia»" de VSC.
\******************************************************************************/
#include <iostream>
#include "leer-vector-reales.hpp"
using namespace std;


/*
 * Pre:  El vector «datos» tiene al menos «n» componentes y n > 0.
 * Post: Ha escrito los valores de las «n» primeras componentes del vector
 *       «datos» desde la de mayor índice a la de menor.
 */
void escribirDatosAlReves(const double datos[], const unsigned int n) {
    cout << "La secuencia en orden inverso es" << endl;
    for (unsigned int i = n - 1; i > 0; i--) {
        // El recorrido inverso de las componentes del vector comienza con el
        // índice n - 1 y termina con 1. La componente indexada por 0 no la
        // tratamos en este bucle simplemente para no poner una coma tras el
        // último dato escrito.
        cout << datos[i] << ", ";
    }

    // Escritura en la pantalla del último dato (el primero que fue leído).
    // Lo hacemos solo si el usuario escribió algún dato (n > 0) y,
    // evidentemente, no ponemos una coma detrás.
    if (n > 0) {
        cout << datos[0];
    }
}


/*
 * Programa que solicita al usuario, en primer lugar, un número positivo «n»,
 * luego solicita «n» datos de tipo real y por último los escribe en la pantalla
 * en orden inverso al introducido.
 */
int main() {
    cout << "Introduzca un número positivo: ";
    unsigned int n;
    cin >> n;

    /* Advertencia: el dimensionamiento de un vector a partir de
     * un dato no constante no forma parte del estándar de C++, pero está
     * implementado por los compiladores LLVM Clang y GNU GCC. */
    double datos[n];

    leerDatos(datos, n);
    escribirDatosAlReves(datos, n);

    return 0;
}
