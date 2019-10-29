/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Ejemplo 6

        HORA FUTURA

// Output

En este ejemplo se indicara la hora futura. Actual+horas.                                                                       
Ingrese la hora actual: 5                                                                                                       
Ingrese la cantidad de horas a estimar: 17                                                                                      
                                                                                                                                
La hora en 17 horas sera: 22Hs                                                                                                  
-------------------------                                                                                                       
Ingrese la hora actual: 13                                                                                                      
Ingrese la cantidad de horas a estimar: 142                                                                                     
                                                                                                                                
La hora en 142 horas sera: 11Hs  

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Variables globales

// Funciones

void hora_futura(int *hora,int horas)
{
    *hora = *hora + horas;
    
    while(*hora>24)    {        *hora -= 24;    }
}


// Main
int main()
{
    int hora, horas;
    
    printf("En este ejemplo se indicara la hora futura. Actual+horas.");
    
    do
    {
        printf("\nIngrese la hora actual: ");
        scanf("%d",&hora);
        
        printf("Ingrese la cantidad de horas a estimar: ");
        scanf("%d",&horas);
        
        hora_futura(&hora,horas);
        
        printf("\nLa hora en %d horas sera: %dHs",horas,hora);
        printf("\n-------------------------");
        
    }while(1);
}
