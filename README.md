# problemas-t09-vectores

Soluciones a los problemas de la clase de problemas con vectores de la asignatura Programación 1.

Los enunciados pueden consultarse [aquí](https://miguel-latre.github.io/transparencias/problemas-7-problemas-con-vectores.pdf).

Se recomienda **no consultar** estas soluciones hasta **después** de haber intentado resolverlos o haber asistido a la clase de problemas correspondiente.

## Soluciones a los problemas 1 y 2

En el momento de publicar el enunciado de estos problemas, no se ha visto con detalle en las clases de teoría cómo utilizar vectores como parámetros de funciones. Comprenderás mejor las soluciones con funciones cuando se haya visto en clase (martes 2 de noviembre en el grupo 412 y viernes 6 de noviembre en el grupo 411).

### Problema 1

Del primer problema (`invertir-secuencia`), se proporcionan tres soluciones:

- `1a-invertir-secuencia-sin-funciones.cpp`

  Solución que no utiliza funciones auxiliares (el programa completo está contenido en el fichero).
  
  Esta solución dimensiona un vector a partir de una variable. Esta forma de dimensionamiento no forma parte del estándar de C++, pero es muy útil en ciertas ocasiones y está implementada por los compiladores GNU GCC y MinGW.

- `1a-invertir-secuencia-sin-funciones-estandar.cpp`

  Solución que tampoco utiliza funciones auxiliares (el programa completo está contenido en el fichero).

  En esta versión, el dimensionamiento del vector se hace a partir de un  dato constante conocido en tiempo de compilación, de acuerdo con el estándar de C++. Por ello, trabaja con un vector «sobredimensionado».

- `1b-invertir-secuencia-main.cpp`

  Solución que utiliza funciones para estructurar el código del programa. Como la función `leerDatos` se puede reutilizar en el programa `2b-superiores-media-main.cpp`, se ha movido esta a un módulo denominado `leer-datos` y, por lo tanto, el código de esta versión está repartido en dos módulos. Las instrucciones para compilarlo y ejectuarlo están en la cabecera del fichero.

### Problema 2

Del segundo problema (`superiores-media`), se proporcionan dos soluciones:

- `2a-superiores-media-sin-funciones.cpp`

  Solución que no utiliza funciones auxiliares (el programa completo está contenido en el fichero).
  
- `2b-superiores-media-main.cpp`

  Solución que utiliza funciones para estructurar el código del programa. Como la función `leerDatos` se puede reutilizar en el programa `1b-invertir-secuencia-main.cpp`, se ha movido esta a un módulo denominado `leer-datos` y, por lo tanto, el código de esta versión está repartido en dos módulos. Las instrucciones para compilarlo y ejectuarlo están en la cabecera del fichero.

## Solución al problema 3a

El problema 3a se ha reformulado a partir del problema 3 original (ahora 3b), para poder realizarlo sin utilizar funciones. La solución está en el fichero `3a-positivos.cpp`.

## Soluciones a los problemas 3b a 10

El fichero `3b-10-soluciones.cpp` contiene el código de las funciones solicitadas en los problemas 3b a 10. Dicho fichero también contiene funciones que hacen pruebas de las fuciones solicitadas y una función `main()` que invoca a estas últimas.
