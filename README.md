# Problemas del tema 9 (vectores)

Soluciones a los [problemas del tema 9 (vectores)](https://miguel-latre.github.io/transparencias/pbs-tema-09a-vectores.pdf) de la asignatura [Programación 1](https://github.com/prog1-eina) ([Grado en Ingeniería Informática](https://webdiis.unizar.es/~silarri/coordinadorGrado/), [Escuela de Ingeniería y Arquitectura](https://eina.unizar.es/), [Universidad de Zaragoza](https://www.unizar.es/)).

Se recomienda **no consultar** estas soluciones hasta **después** de haber intentado resolverlos o haber asistido a la clase de problemas correspondiente.

## Solución al problema 1

El problema 1 es una reformulación del problema 4 para resolverlo a través de una función ``main()`` sin necesidad de utilizar funciones auxiliares. La solución está en el fichero `1-positivos.cpp`.

## Soluciones a los problemas 2 y 3

### Problema 2

Del segundo problema (`invertir-secuencia`), se proporcionan tres soluciones:

- `2a-invertir-secuencia-sin-funciones.cpp`

  Solución que no utiliza funciones auxiliares (el programa completo está contenido en el fichero).
  
  Esta solución dimensiona un vector a partir de una variable. Esta forma de dimensionamiento no forma parte del estándar de C++, pero es muy útil en ciertas ocasiones y está implementada por los compiladores GNU GCC y MinGW.

- `2a-invertir-secuencia-sin-funciones-estandar.cpp`

  Solución que tampoco utiliza funciones auxiliares (el programa completo está contenido en el fichero).

  En esta versión, el dimensionamiento del vector se hace a partir de un dato constante conocido en tiempo de compilación, de acuerdo con el estándar de C++. Por ello, trabaja con un vector «sobredimensionado».

- `2b-invertir-secuencia-main.cpp`

  Solución que utiliza funciones para estructurar el código del programa. Como la función `leerDatos` se puede reutilizar en el programa `3b-superiores-media-main.cpp`, se ha movido esta a un módulo denominado `leer-datos` y, por lo tanto, el código de esta versión está repartido en dos módulos. Las instrucciones para compilarlo y ejecutarlo están en la cabecera del fichero.

### Problema 3

Del tercer problema (`superiores-media`), se proporcionan dos soluciones:

- `3a-superiores-media-sin-funciones.cpp`

  Solución que no utiliza funciones auxiliares (el programa completo está contenido en el fichero).
  
- `3b-superiores-media-main.cpp`

  Solución que utiliza funciones para estructurar el código del programa. Como la función `leerDatos` se puede reutilizar en el programa `2b-invertir-secuencia-main.cpp`, se ha movido esta a un módulo denominado `leer-datos` y, por lo tanto, el código de esta versión está repartido en dos módulos. Las instrucciones para compilarlo y ejecutarlo están en la cabecera del fichero.

## Soluciones a los problemas 4 a 11

El fichero `4-11-soluciones.cpp` contiene el código de las funciones solicitadas en los problemas 4 a 11. Dicho fichero también contiene funciones que hacen pruebas de las funciones solicitadas y una función `main()` que invoca a estas últimas.
