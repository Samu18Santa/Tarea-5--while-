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
         Z
        Z Z
       Z   Z
      Z     Z
     Z       Z
    Z         Z
   Z           Z
  Z             Z
 Z               Z
Z                 Z
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetras con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    while( 1 <= cantidadDeLetras ){
        printf( "Z" );
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
    int espaciosIniciales = 9, espaciosMedios = -1;//se declaran las variables necesarias para el programa, espaciosIniciales y espaciosMedios para la cantidad de espacios que se van a imprimir al inicio o medio de cada linea, espaciosMedios se inicia en -1 ya que en la primer fila no se requieren espacios medios, y de ahi en dalentante van aumentando de 2 en dos, ya en la segunda se requiere solo uno y en la tercera 3 y asi sucesivamente

    //se declara la variable fila para el ciclo while, se inicializa en 1, se evalua si fila es menor o igual a 10 y se incrementa en 1, esta para cada fila del diseño
    int fila = 1;
    while( fila <= 10 )
    {
        ImprimirEspacios( espaciosIniciales );
        ImprimirLetras( 1 );
        ImprimirEspacios( espaciosMedios );

        //se evalua si fila es diferente de 1 para imprimir la segunda Z al final de cada linea
        if ( fila != 1 )
        {            
            ImprimirLetras( 1 );
        }
        printf( "\n" );
        espaciosIniciales--;
        espaciosMedios += 2;
        fila++;
    }//fin del while

    return 0;
}