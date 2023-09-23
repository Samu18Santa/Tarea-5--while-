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
- El siguiente programa Imprime dos A separadas por espacios, al imprimirlas rapdido y con varios saltos de linea,
se consigue un efecto de movimiento
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>
#include <windows.h>

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
    int espacioInicial = 0, espacioMedio = 78;//se declaran las variables necesarias para el programa, espacioInicial para los espacios al inicio de cada columna y espacioMedio para los espacios entre las dos A
    
    while( espacioMedio >= 0  )
    {
        ImprimirEspacios( espacioInicial );
        printf( "A" );
        ImprimirEspacios( espacioMedio );
        printf( "A" );
        Sleep( 200 );
        //mientras el espacio medio sea difernete de 0 se limpia la consola en cada iteracion para crear el efecto de que las A se mueven
        if( espacioMedio != 0 )
            system( "cls" );
        espacioInicial++;
        espacioMedio -= 2;
    }//fin del while
    //se pausa la consola para que esta no se cierre automaticamente al terminar el programa
    system( "pause" );

    return 0;
}