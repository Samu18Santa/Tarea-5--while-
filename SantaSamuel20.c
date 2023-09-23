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
                                                                               A
                                                                              AA
                                                                             AAA
                                                                            AAAA
                                                                           AAAAA
                                                                          AAAAAA
                                                                         AAAAAAA
                                                                        AAAAAAAA
                                                                       AAAAAAAAA
                                                                      AAAAAAAAAA
                                                                     AAAAAAAAAAA
                                                                    AAAAAAAAAAAA
                                                                   AAAAAAAAAAAAA
                                                                  AAAAAAAAAAAAAA
                                                                 AAAAAAAAAAAAAAA
                                                                AAAAAAAAAAAAAAAA
                                                               AAAAAAAAAAAAAAAAA
                                                              AAAAAAAAAAAAAAAAAA
                                                             AAAAAAAAAAAAAAAAAAA
                                                            AAAAAAAAAAAAAAAAAAAA
                                                           AAAAAAAAAAAAAAAAAAAAA
                                                          AAAAAAAAAAAAAAAAAAAAAA
                                                         AAAAAAAAAAAAAAAAAAAAAAA
                                                        AAAAAAAAAAAAAAAAAAAAAAAA
                                                       AAAAAAAAAAAAAAAAAAAAAAAAA
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

int main()
{
    //se declara la variable fila para el ciclo while, se inicializa en 1, se evalua si fila es menor o igual a 25 y se incrementa en 1, esta para cada fila del diseño
    int fila = 1;
    while( fila <= 25 )
    {
        ImprimirEspacios( 80 - fila );
        ImprimirLetras( fila );
        printf( "\n" );
        fila++;
    }//fin del while

    return 0;
}