/*- Fecha de publicación: 2023-09-03
- Hora: 4:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa imprime en pantalla el siguiente diseño:
                                  PPPPPPPPPPPPP
                                   PPPPPPPPPPP
                                    PPPPPPPPP
                                     PPPPPPP
                                      PPPPP
                                       PPP
                                        P
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int main()
{
    int cantidadDeLetras = 13, cantidadDeEspacios = 33;//se declaran las variables necesarias para el programa, cantidadDeLetras para la cantidad de letras P que se van a imprimir y cantidadDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada linea

    //se crea el ciclo while para imprimir el diseño, se declaran las variables i, j y k, i para el numero de lineas, j para la cantidad de espacios al inicio de cada linea y k para la cantidad de letras P que se van a imprimir
    int i = 1, j = 1, k = 1;
    while( i <= 7 )
    {
        while( j <= cantidadDeEspacios )
        {
            printf( " " );
            j++;
        }

        while( k <= cantidadDeLetras )
        {
            printf( "P" );
            k++;
        }

        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
        i++;
        //se reinician los valores de j y k para la siguiente linea
        j = 1;
        k = 1;
    }//fin del while

    return 0;
}