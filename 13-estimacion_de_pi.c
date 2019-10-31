/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 13

        ESTIMACION DE PI
 
// Output

El numero pi se estima según: pi = 4*(1-1/3+1/5+1/7+...)                                                                        
Ingresar cantidad de terminos a utilizar: 10                                                                                    
El número pi es: 3.2323157489

Ingresar cantidad de terminos a utilizar: 1000                                                                                  
El número pi es: 3.1425915956

Ingresar cantidad de terminos a utilizar: 100000                                                                                
El número pi es: 3.1416025956

Ingresar cantidad de terminos a utilizar: 10000000                                                                              
El número pi es: 3.1415927150

Ingresar cantidad de terminos a utilizar: 100000000                                                                             
El número pi es: 3.1415926753

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

// Variables globales
long terminos;

// Funciones

void imprimir_pi(long terminos)
{
    double pi;
    
    double suma=0;
    
    for(int i=0;i<terminos;i++)
    {
        int signo = i%2==0?1:2;
        suma = suma + pow(-1,signo)*(1/(float)((i+2)*2-1));
    }
    
    pi = 4*(1+suma);
    
    printf("El número pi es: %.10f",pi);
}


// Main
int main()
{
    printf("\n\nEl numero pi se estima según: pi = 4*(1-1/3+1/5+1/7+...) ");
    
    while(1)
    {
        printf("\n\nIngresar cantidad de terminos a utilizar: ");
        scanf("%ld",&terminos);

        imprimir_pi(terminos);
    }
    
    return 0;
}
