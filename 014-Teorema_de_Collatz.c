/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 14

        TEOREMA DE COLLATZ
 
Si el numero es par -> /2
Si el numero es impar -> x3+1

// Output

Ingresar numero: 34                                                                                                             
34,17,52,26,13,40,20,10,5,16,8,4,2,1                                                                                            
                                                                                                                                
Ingresar numero: 106                                                                                                            
106,53,160,80,40,20,10,5,16,8,4,2,1                                                                                             
                                                                                                                                
Ingresar numero: 123                                                                                                            
123,370,185,556,278,139,418,209,628,314,157,472,236,118,59,178,89,268,134,67,202,101,304,152,76,38,19,58,29,88,44,22,11,34,17,  
52,26,13,40,20,10,5,16,8,4,2,1

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

void secuencia_collatz(long numero)
{
    printf("%ld",numero);
    
    while(numero != 1)
    {
        if((numero%2)==0)
        {
            numero = numero/2;
        }
        else
        {
            numero = numero*3+1;
        }
        
        printf(",%ld",numero);
    }
}


// Main
int main()
{
    while(1)
    {
        printf("\n\nIngresar numero: ");
        scanf("%ld",&numero);

        secuencia_collatz(numero);
    }
    
    return 0;
}
