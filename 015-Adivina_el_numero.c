/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 15

        ADIVINA EL NUMERO
 


// Output

Adivine el numero:35                                                                                                            
El numero es mayor a 35: 70                                                                                                     
El numero es menor a 70: 55                                                                                                     
El numero es menor a 55: 40                                                                                                     
El numero es mayor a 40: 47                                                                                                     
El numero es mayor a 47: 51                                                                                                     
El numero es menor a 51: 49                                                                                                     
El numero es mayor a 49: 50                                                                                                     
Adivinaste en 7 intentos!

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

// Variables globales
long numero,elegido;
int contador;

// Funciones
int check(long numero,long elegido)
{
    if(elegido > numero)
    {
        printf("El numero es menor a %ld: ",elegido);
    }
    else if(elegido < numero)
    {
        printf("El numero es mayor a %ld: ",elegido);
    }
    else
    {
        printf("Adivinaste en %d intentos!\n\n",contador-1);
        return 0;
    }
    
    return 1;
}

// Main
int main () 
{
    time_t t;
    int done=1;
    
    /* Inicializo el generador de numeros */
    srand((unsigned) time(&t));

    numero = rand() % 100;
   
    printf("Adivine el numero:");
    
    contador = 0;
    while(done)
    {
        contador++;
        scanf("%ld",&elegido);
        done = check(numero,elegido);
    }
   
    return(0);
}
