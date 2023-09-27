/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30 de octubre de 2020
 * Resumen: Solución al problema 3 planteado en la clase de problemas
 *          del tema 9 (vectores) que no utiliza funciones auxiliares.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 3a-superiores-media-sin-funciones.cpp -o 3a-sups
 *       y ejecutarse en Windows a través de la orden
 *           .\3a-sups.exe
 *       o en Linux y macOS
 *           ./3a-sups
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que solicita al usuario, en primer lugar, un número positivo «n»,
 * luego solicita «n» datos de tipo real y por último, escribe en la pantalla el
 * valor medio de los datos introducidos y cuántos de ellos son superiores a la
 * media.
 */
int main() {
    cout << "Introduzca un número positivo: ";
    int n;
    cin >> n;

    if (n > 0) {
        double datos[n];
        /* Advertencia: el dimensionamiento de un vector a partir de
        * un dato no constante no forma parte del estándar de C++, pero está
        * implementado por los compiladores LLVM Clang y GNU GCC. */

        // Lectura de los datos
        cout << "Introduzca " << n << " números reales: ";
        for (unsigned i = 0; i < n; i++) {
            cin >> datos[i];
        }
        
        // Cálculo de la media
        double suma = 0.0;
        for (unsigned i = 0; i < n; i++) {
            suma += datos[i];
        }
        double media = suma / n;

        // Cuenta de los superiores a la media
        unsigned superiores = 0;
        for (unsigned i = 0; i < n; i++) {
            if (datos[i] > media) {
                superiores++;
            }
        }

        // Escritura de los resultados
        cout << "La media de los datos introducidos es " << media << " y " 
            << superiores
            << " de ellos son superiores o iguales a la media." << endl;
            
        return 0;
    } else {
        cout << "El número de datos tiene que ser mayor que 0." << endl;
        return 1;
    }
}
