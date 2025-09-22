/******************************************************************************
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 4 de noviembre de 2020
 * Resumen: Fichero de implementación de un módulo que incluye una función para
 *          leer desde el teclado un vector de datos de tipo real. Se utiliza
 *          en las soluciones a los problemas 2 y 3 planteados en la clase de 
 *          problemas del tema 9 (vectores).
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  El vector «datos» tiene al menos «n» componentes.
 * Post: Solicita «n» datos de tipo real al usuario y los copia en las primeras
 *       «n» componentes del vector «datos», de menor a mayor índice.
 */
void leerDatos(double datos[], const unsigned n) {
    cout << "Introduzca " << n << " números reales: ";
    for (unsigned i = 0; i < n; i++) {
        cin >> datos[i];
    }
}
