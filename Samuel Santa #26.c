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
Z                 Z
 Z               Z
  Z             Z
   Z           Z
    Z         Z
     Z       Z
      Z     Z
       Z   Z
        Z Z
         Z
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int main()
{
    int espaciosIniciales = 0, espaciosMedios = 17;//se declaran las variables necesarias para el programa, espaciosIniciales y espaciosMedios para la cantidad de espacios que se van a imprimir al inicio o medio de cada linea

    //se crea el ciclo while para imprimir el diseño, se declaran las variables i, j y k, i para el numero de lineas, j para la cantidad de espacios al inicio de cada linea y k para la cantidad de letras P que se van a imprimir
    int i = 1, j = 1, k = 1;
    while( i <= 10 )
    {
        while( j <= espaciosIniciales )
        {
            printf( " " );
            j++;
        }

        if( i != 10 )
            printf( "Z" );

        while( k <= espaciosMedios )
        {
            printf( " " );
            k++;
        }
            

        printf( "Z\n" );

        espaciosIniciales++;
        espaciosMedios -= 2;
        i++;
        //se reinician los valores de j y k para la siguiente linea
        j = 1;
        k = 1;
    }//fin del while

    return 0;
}