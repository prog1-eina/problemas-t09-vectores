/******************************************************************************\
 * Curso de Programación 1. Tema 9
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 31 de octubre de 2022
 * Resumen: Soluciones a los problemas 4 y 7 a 11 de Programación 1 planteados
 *          en la clase de problemas del tema 9 (vectores).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 4-11-soluciones.cpp -o 4-11-soluciones
 *       y ejecutarse en Windows a través de la orden
 *           .\4-11-soluciones.exe
 *       o en Linux y macOS
 *           ./4-11-soluciones
\******************************************************************************/
#include <iostream>
using namespace std;


/********************************** Problema 4 ********************************/
/*
 * Pre:  El vector «v» tiene al menos «n» componentes.
 * Post: Devuelve el número de datos positivos almacenados en las
 *       primeras «n» componentes del vector «v».
 */
unsigned numPositivos(const int v[], const unsigned n) {
    unsigned cuenta = 0;
    for (unsigned i = 0; i < n; i++) {
        if (v[i] > 0) {
            cuenta++;
        }
    }
    return cuenta;
}


/********************************** Problema 5 ********************************/
/* No se publica la solución a este problema, puesto que es uno de los que se
 * pide en la práctica 4.
 */


/********************************** Problema 6 ********************************/
/* No se publica la solución a este problema, puesto que es uno de los que se
 * pide en la práctica 4.
 */


/********************************** Problema 7 ********************************/
/*
 * Pre:  El vector «v» tiene «n» componentes y se cumple que 0 ≤ i < n.
 * Post: Devuelve el número de veces que está repetido el dato
 *       «i»-ésimo del vector «v».
 */
unsigned numeroRepeticiones(const int v[], const unsigned i, const unsigned n) {
    unsigned repeticiones = 0;
    for (unsigned j = 0; j < n; j++) {
        if (v[i] == v[j]) {
            repeticiones++;
        }
    }
    return repeticiones;
}


/*
 * Pre:  El vector «v» tiene «n» componentes y «n» > 0.
 * Post: Devuelve la moda de los datos almacenados en el vector «v».
 */
int moda(const int v[], const unsigned n) {
    int moda = v[0];
    unsigned repeticionesDeLaModa = numeroRepeticiones(v, 0, n);

    for (unsigned i = 1; i < n; i++) {
        unsigned repeticionesDelDatoIesimo = numeroRepeticiones(v, i, n);
        if (repeticionesDelDatoIesimo > repeticionesDeLaModa) {
            moda = v[i];
            repeticionesDeLaModa = repeticionesDelDatoIesimo;
        }
    }
    return moda;
}


/********************************** Problema 8 ********************************/
/*
 * Pre:  El vector «datos» tiene «n» componentes.
 * Post: Devuelve el valor true si y solo si un dato igual al valor del
 *       parámetro «buscado» está almacenado en el vector «datos».
 */
bool esta(const int datos[], const unsigned n, const int buscado) {
    bool encontrado = false;
    unsigned i = 0;
    while (!encontrado && i < n) {
        encontrado = (datos[i] == buscado);
        i++;
    }
    return encontrado;
}


/********************************** Problema 9 ********************************/
/*
 * Pre:  El vector «v» tiene «n» componentes.
 * Post: Devuelve true si y solo si los datos del vector «v» están ordenados
 *       de forma no decreciente.
 */
bool estaOrdenada(const int v[], const unsigned n) {
    // ordenada == false cuando se tiene la CERTEZA de que no está ordenada de
    // forma no decreciente, es decir, cuando se han encontrado un par de
    // componentes consecutivas en el orden incorrecto.
    bool ordenada = true;
    unsigned i = 1;
    while (ordenada && i < n) {
        ordenada = (v[i - 1] <= v[i]);
        i++;
    }
    return ordenada;
}


/********************************* Problema 10 ********************************/
/*
 * Pre:  El vector «v» tiene al menos «n» componentes; sea Np
 *       el número de datos positivos del vector «v»: el vector «p» tiene
 *       al menos Np componentes. El valor del parámetro «numPositivos» no
 *       está definido.
 * Post: Las primeras Np componentes del vector «p» almacenan los Np
 *       datos positivos de las primeras «n» componentes del vector «T» y
 *       numPositivos = Np.
 */
void copiaPositivos(const int T[], const unsigned n,
                    int P[], unsigned &numPositivos) {
    numPositivos = 0;
    for (unsigned i = 0; i < n; i++) {
        if (T[i] > 0) {
            P[numPositivos] = T[i];
            numPositivos++;
        }
    }
}


/********************************* Problema 11 ********************************/
/*
 * Pre:  El vector «secuencia» tiene «longitud» componentes.
 * Post: Escribe en el vector «secuencia» los primeros «longitud»
 *       dígitos de la secuencia de Kolakoski.
 */
void kolakoski(unsigned secuencia[], const unsigned longitud) {
    /* Declaraciones e inicializaciones */
    // valor del dígito o dígitos que hay que añadir a la secuencia
    unsigned siguienteDigito = 1;

    // Por la definición del primer bloque de la secuencia
    secuencia[0] = siguienteDigito;

    // Número de dígitos obtenidos hasta el momento
    unsigned numDigitos = 1;

    // Número de bloques obtenidos hasta el momento
    unsigned numBloques = 1;

    while (numDigitos < longitud) {
        // Cálculo del siguiente dígito o dígitos a añadir:
        // si 1, es 2; si 2, es 1
        siguienteDigito = 3 - siguienteDigito;

        // Se añade un dígito del nuevo bloque
        secuencia[numDigitos] = siguienteDigito;

        // Si la longitud del nuevo bloque es 2 y "cabe" en el vector
        // se añade el segundo dígito del bloque
        if ((secuencia[numBloques - 1] == 2)
                && (numDigitos + 1 < longitud)) {
            secuencia[numDigitos + 1] = siguienteDigito;
        }

        // Se actualiza el número de bloques y dígitos de la secuencia
        // obtenidos
        numDigitos += secuencia[numBloques - 1];
        numBloques++;
    }
}


/************************** Código para las pruebas ***************************/
/*
 * Datos para las pruebas de «numPositivos», «copiar», «sonIguales» y
 * «copiaPositivos».
 */
const int VECTOR_0[] = {};
const int VECTOR_1[] = {5};
const int VECTOR_2[] = {-5};
const int VECTOR_3[] = {-1, 1};
const int VECTOR_4[] = {1, -1};
const int VECTOR_5[] = {1, -2, 3, -4, 5, -6};
const int VECTOR_6[] = {-1, 2, -3, 4, -5, 6};


/*
 * Prueba la función «numPositivos» con los datos anteriores. Si el resultado de
 * una prueba es correcto, escribe en la pantalla true; en caso contrario,
 * escribe en la pantalla false.
 */
void pruebaNumPositivos() {
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


/*
 * Prueba la función «moda».
 * Si el resultado de una prueba es correcto, escribe en la pantalla true;
 * en caso contrario, escribe en la pantalla false.
 * Utiliza los vectores de ejemplo del enunciado.
 */
void pruebaModa() {
    cout << endl;
    cout << "Pruebas de la función «moda»: " << endl;    
    cout << boolalpha;

    const int T1[] = {4, 7, 5, 5, 1, 7, 6, 9, 2, 2, 5, 0, 7, 9, 5, 6, 5, 0, 8, 0, 2};
    cout << (moda(T1, 21) == 5) << endl;

    const int T2[] = {1, 5, 8, 6, 8, 3, 4, 6, 6, 1, 5, 8, 1, 9, 5, 9, 5, 8, 9, 2, 9};
    int m = moda(T2, 21);
    cout << (m == 5 || m == 8 || m == 9) << endl;
}


/*
 * Prueba la función «esta».
 * Si el resultado de una prueba es correcto, escribe en la pantalla true;
 * en caso contrario, escribe en la pantalla false.
 */
void pruebaEsta() {
    cout << endl;
    cout << "Pruebas de la función «esta»: " << endl;    
    cout << boolalpha;

    cout << !esta(VECTOR_0, 0,  0) << endl;
    cout << !esta(VECTOR_1, 1,  0) << endl;
    cout <<  esta(VECTOR_1, 1,  5) << endl;
    cout << !esta(VECTOR_2, 1,  5) << endl;
    cout <<  esta(VECTOR_2, 1, -5) << endl;
    cout << !esta(VECTOR_6, 6,  3) << endl;
    cout <<  esta(VECTOR_6, 6, -3) << endl;
}


/*
 * Prueba la función «estaOrdenada».
 * Si el resultado de una prueba es correcto, escribe en la pantalla true;
 * en caso contrario, escribe en la pantalla false.
 */
void pruebaEstaOrdenada() {
    const int ORDENADA[] = {1, 2, 3, 4, 5, 6};
    cout << endl;
    cout << "Pruebas de la función «estaOrdenada»: " << endl;    
    cout << boolalpha;

    cout <<  estaOrdenada(VECTOR_0, 0) << endl;
    cout <<  estaOrdenada(VECTOR_1, 1) << endl;
    cout <<  estaOrdenada(VECTOR_2, 1) << endl;
    cout <<  estaOrdenada(VECTOR_3, 2) << endl;
    cout << !estaOrdenada(VECTOR_4, 2) << endl;
    cout << !estaOrdenada(VECTOR_5, 6) << endl;
    cout << !estaOrdenada(VECTOR_6, 6) << endl;
    cout <<  estaOrdenada(ORDENADA, 6) << endl;
    
}


/*
 * Prueba la función «copiaPositivos».
 * Si el resultado de una prueba es correcto, escribe en la pantalla true;
 * en caso contrario, escribe en la pantalla false.
 * Utiliza la función «sonIguales», que es también objeto de otras pruebas.
 */
void pruebaCopiaPositivos() {
    const int RESULTADO_3_Y_4[] = {1};
    const int RESULTADO_5[] = {1, 3, 5};
    const int RESULTADO_6[] = {2, 4, 6};
    
    cout << endl;
    cout << "Pruebas de la función «copiaPositivos»: " << endl;
    cout << boolalpha;

    int positivos[6];
    unsigned nPos;

    copiaPositivos(VECTOR_0, 0, positivos, nPos);
    cout << (nPos == 0) << endl;

    copiaPositivos(VECTOR_1, 1, positivos, nPos);
    cout << ((nPos == 1) && (positivos[0] == VECTOR_1[0])) << endl;

    copiaPositivos(VECTOR_2, 1, positivos, nPos);
    cout << (nPos == 0) << endl;

    copiaPositivos(VECTOR_3, 2, positivos, nPos);
    cout << ((nPos == 1) && (positivos[0] == RESULTADO_3_Y_4[0])) << endl;

    copiaPositivos(VECTOR_4, 2, positivos, nPos);
    cout << ((nPos == 1) && (positivos[0] == RESULTADO_3_Y_4[0])) << endl;

    copiaPositivos(VECTOR_5, 6, positivos, nPos);
    cout << ((nPos == 3) && (positivos[0] == RESULTADO_5[0]) 
                         && (positivos[1] == RESULTADO_5[1])
                         && (positivos[2] == RESULTADO_5[2])) << endl;

    copiaPositivos(VECTOR_6, 6, positivos, nPos);
    cout << ((nPos == 3) && (positivos[0] == RESULTADO_6[0]) 
                         && (positivos[1] == RESULTADO_6[1])
                         && (positivos[2] == RESULTADO_6[2])) << endl;
}


/*
 * Prueba la función «kolakoski», escribiendo los primeros 70 dígitos en la
 * pantalla.
 */
void pruebaKolakoski() {
    cout << endl;
    cout << "Pruebas de la función «kolakoski»: " << endl;
    const unsigned NUM_DIGITOS = 70;
    unsigned k[NUM_DIGITOS];
    kolakoski(k, NUM_DIGITOS);
    for (unsigned i = 0; i < NUM_DIGITOS; i++) {
        cout << k[i];
    }
    cout << endl;
}


/*
 * Programa que realiza pruebas de las funciones «numPositivos», «copiar»,
 * «sonIguales», «moda», «esta», «estaOrdenada», «copiaPositivos» y «kolakoski».
 */
int main() {
    pruebaNumPositivos();
    pruebaModa();
    pruebaEsta();
    pruebaEstaOrdenada();
    pruebaCopiaPositivos();
    pruebaKolakoski();
    return 0;
}
