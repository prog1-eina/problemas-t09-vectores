/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 4 de noviembre de 2020
 * Resumen: Solución al problema 2 planteado en la clase de problemas
 *          del tema 9 (vectores) que no utiliza funciones auxiliares.
 * Nota: Esta versión no sigue el estándar de C++ en cuanto a la declaración de
 *       vectores y aprovecha la posibilidad que ofrecen los compiladores de GCC
 *       y MinGW de declarar un vector de dimensión igual al resultado de
 *       evaluar una expresión en tiempo de ejecución. Es más cómodo trabajar
 *       así, pero podríamos tener problemas de portabilidad al compilar con
 *       otro compilador.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 2a-*-funciones.cpp -o invertir
 *       y ejecutarse en Windows a través de la orden
 *           .\invertir.exe
 *       o en Linux y macOS
 *           ./invertir
\******************************************************************************/
#include <iostream>
using namespace std;


/*
 * Programa que solicita al usuario, en primer lugar, un número positivo «n»,
 * luego solicita «n» datos de tipo real y por último los escribe en la pantalla
 * en orden inverso al introducido.
 */
int main() {
    cout << "Introduzca un número positivo: ";
    int n;
    cin >> n;

    if (n > 0) {
        /* Advertencia: el dimensionamiento de un vector a partir de un dato no
         * constante no forma parte del estándar de C++, pero está implementado
         * por los compiladores GNU GCC y MinGW. */
        double datos[n];

        // Lectura de los datos
        cout << "Introduzca " << n << " números reales: ";
        for (unsigned i = 0; i < n; i++) {
            cin >> datos[i];
        }

        cout << "La secuencia en orden inverso es: " << endl;
        for (unsigned i = n - 1; i > 0; i--) {
            // El recorrido inverso de las componentes del vector comienza con el
            // índice n - 1 y termina con 1. La componente indexada por 0 no la
            // tratamos en este bucle simplemente para no poner una coma tras el
            // último dato escrito.        
            cout << datos[i] << ", ";
        }
        
        // Escritura en la pantalla del último dato (el primero que fue leído).
        // Evidentemente, no ponemos una coma detrás.
        cout << datos[0] << endl;
        return 0;
    } else {
        cout << "El número de datos tiene que ser mayor que 0." << endl;
        return 1;
    }
}
