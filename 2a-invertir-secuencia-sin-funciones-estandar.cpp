/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 4 de noviembre de 2020
 * Resumen: Solución al problema 2 planteado en la clase de problemas
 *          del tema 9 (vectores) que no utiliza funciones auxiliares.
 * Nota: Esta versión sigue rigurosamente el estándar de C++ en cuanto a la
 *       declaración de vectores (la dimensión tiene que ser una expresión
 *       constante conocida en tiempo de compilación).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 2a-*-estandar.cpp -o invertir-std
 *       y ejecutarse en Windows a través de la orden
 *           .\invertir-std.exe
 *       o en Linux y macOS
 *           ./invertir-std
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Número máximo de enteros con los que trabajaremos
 */
const unsigned DIMENSION_MAXIMA = 40;

/*
 * Programa que solicita al usuario, en primer lugar, un número positivo «n»,
 * luego solicita «n» datos de tipo real y por último los escribe en la pantalla
 * en orden inverso al introducido.
 */
int main() {
    cout << "Introduzca un número positivo: ";
    int n;
    cin >> n;

    if (0 < n && n <= DIMENSION_MAXIMA) {
        /* En esta versión, el dimensionamiento del vector se hace a partir de un 
        * dato constante conocido en tiempo de compilación, de acuerdo con el 
        * estándar de C++. Se va a trabajar con un vector «sobredimensionado»: de 
        * las «DIMENSION_MAXIMA» que tiene el vector «datos», se va a trabajar solo 
        * con las «n» primeras. */
        double datos[DIMENSION_MAXIMA];

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
        if (n > 0) {
            cout << datos[0];
        }
        return 0;
    } else {
        cout << "El número de datos tiene que ser mayor que 0 y "
             << "menor o igual que " << DIMENSION_MAXIMA << "." << endl;
        return 1;
    }
}
