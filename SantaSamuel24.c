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
- El siguiente programa imprime en pantalla el siguiente diseño:
                           A     A
                           AA   AA
                           AAA AAA
                           AAAAAAA
                           AAA AAA
                           AA   AA
                           A     A

- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetras con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    while( 1 <= cantidadDeLetras ){
        printf( "A" );
        cantidadDeLetras--;
    }
}
//se crea la función ImprimirEspacios con un parámetro de tipo entero, cantidadDeEspacios para imprimir los espacios de cada columna
void ImprimirEspacios( int cantidadDeEspacios )
{
    while( 1 <= cantidadDeEspacios ){
        printf( " " );
        cantidadDeEspacios--;
    }
}//fin de la función ImprimirEspacios

//se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
void SaltoDeLinea()
{
    printf( "\n" );
}//fin de la función SaltoDeLinea

int  main()
{
    int fila=1, espaciosMedios=5;//se declaran las variables fila y espaciosMedios para el ciclo while, se inicializan en 1 y 5 respectivamente, se evalua si fila es menor o igual a 7 y se incrementa en 1, esta para cada fila del diseño
    //para las 3 primeras filas
    while( fila <= 3 ){
        ImprimirEspacios( 27 );
        ImprimirLetras( fila );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( fila );
        SaltoDeLinea();
        fila++;
        espaciosMedios-=2;
    }//fin del while

    //cuando fila = 4
    ImprimirEspacios( 27 );
    ImprimirLetras( 7 );
    SaltoDeLinea();
    fila++;

    espaciosMedios = 1;//se le da a la variable espaciosMedios un 1 para iniciar desde la fila 5
    int cantidadA=3;//se declara la variable cantidadA para el ciclo while, se inicializa en 3, se evalua si fila es menor o igual a 6 y se incrementa en 1, esta para cada fila del diseño
    //para las 3 ultimas filas
    while( fila <= 7 ){
        ImprimirEspacios( 27 );
        ImprimirLetras( cantidadA );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( cantidadA );
        SaltoDeLinea();
        fila++;
        cantidadA--;
        espaciosMedios+=2;
    }//fin del while

    return 0;
}