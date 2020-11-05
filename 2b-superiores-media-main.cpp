/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30 de octubre de 2019
 * Resumen: Solución al problema 1.º planteado en la clase de problemas
 *          del tema 9 (vectores).
 * Nota: El código de esta versión está repartido en dos módulos. Para
 *       compilarlo, hay que ejecutar el comando
 *           make superiores-media
 *       o, en Windows,
 *           mingw32-make superiores-media
 *       o ejecutar la tarea "Compilar programa «superiores-media»" de VSC.
 * 
 *       Para ejecutarlo, una vez compilado, hay que ejecutar el comando
 *           ./superiores-media
 *       o, en Windows,
 *           .\superiores-media.exe
 *       o ejecutar la tarea "Ejecutar programa «superiores-media»" de VSC.
 
\******************************************************************************/
#include <iostream>
#include "leer-vector-reales.hpp"
using namespace std;


/*
 * Pre:  «datos» tiene «n» componentes.
 * Post: Ha devuelto el valor medio de los valores almacenados en las
 *       componentes de «datos».
 */
double calcularMedia(const double datos[], const unsigned int n) {
    double suma = 0.0;
    for (unsigned int i = 0; i < n; i++) {
        suma += datos[i];
    }
    return suma / n;
}


/*
 * Pre:  El vector «datos» tiene al menos «n» componentes y n > 0.
 * Post: Ha devuelto cuántos de los datos almacenados en el vector «datos» son
 *       superiores al valor de «umbral».
 */
unsigned int contarSuperiores(const double datos[], const unsigned int n, 
                              const double umbral) {
    unsigned int cuenta = 0;
    for (unsigned int i = 0; i < n; i++) {
        if (datos[i] > umbral) {
            cuenta++;
        }
    }
    return cuenta;
}


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
        /* Advertencia: el dimensionamiento de un vector a partir de
        * un dato no constante no forma parte del estándar de C++, pero está
        * implementado por los compiladores LLVM Clang y GNU GCC. */
        double datos[n];

        leerDatos(datos, n);
        double media = calcularMedia(datos, n);
        unsigned int superiores = contarSuperiores(datos, n, media);
        cout << "La media de los datos introducidos es " << media << " y " 
            << superiores
            << " de ellos son superiores o iguales a la media." << endl;
            
        return 0;
    }
    else {
        cout << "El número de datos tiene que ser mayor que 0." << endl;
        return 1;
    }
}
