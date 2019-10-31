/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 11

        DIVISORES
 
// Output

Ingrese un numero para conocer sus divisores: 34                                                                              
1 2 17                                                                                                                        
Ingrese un numero para conocer sus divisores: 163                                                                             
1                                                                                                                             
Ingrese un numero para conocer sus divisores: 164                                                                             
1 2 4 41 82                                                                                                                   
Ingrese un numero para conocer sus divisores: 1082                                                                            
1 2 541                                                                                                                       
Ingrese un numero para conocer sus divisores: 1024                                                                            
1 2 4 8 16 32 64 128 256 512

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

// Variables globales

long numero;

// Funciones

void imprimir_divisores(long numero)
{
    long contador=1, resto;
    while(contador < (numero/2)+1)
    {
        resto = numero%contador;
        
        if (resto == 0)
        {
            printf("%ld ",contador);
        }
        
        contador++;
    }
    
}


// Main
int main()
{
    while(1)
    {
        printf("\nIngrese un numero para conocer sus divisores: ");
        scanf("%ld",&numero);
    
        imprimir_divisores(numero);
    }
    
    return 0;
}
