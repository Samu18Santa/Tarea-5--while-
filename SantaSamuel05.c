/*- Fecha de publicación: 2023-09-24
- Hora: 2:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa presenta la serie de Perrin sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

int main()
{
    int primerValor = 3, segundoValor = 0, tecerValor = 2, auxiliar = 0, cantidadDeTerminos = 0; //se declaran las variables necesarias para el programa, primerValor, segundoValor y tercerValor para los primeros valores de la serie, auxilar para ayudarnos en la formula usada para hallar los valores de la serie y cantidadDeTerminos para almacenar el numero de terminos ingresado por el usuario.

    printf( "El siguiente programa presenta la serie de Perrin: P(n) = P(n-2) + P(n-3),\ndonde P(0) = 3, P(1) = 0 y P(2) = 2." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
  
    printf( "Los primeros %i terminos de la serie de Perrin son: ", cantidadDeTerminos );

    //se declara la variable i para el ciclo while, se inicializa en 0, se evalua si i es menor que cantidadDeTerminos y se incrementa en 1
    int i = 0;
    while ( i < cantidadDeTerminos )
    {
        printf( "%i, ", primerValor );
        auxiliar = segundoValor + primerValor;
        primerValor = segundoValor;
        segundoValor = tecerValor;
        tecerValor = auxiliar;
        i++;
    }//fin del while

    return 0;
}