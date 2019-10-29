/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Ejemplo 6
Un alumno desea saber que nota necesita en el tercer certamen para aprobar un ramo.

El promedio del ramo se calcula con la siguiente formula.

NC=(C1+C2+C3)3
NF=NC⋅0.7+NL⋅0.3

Donde:
- NC es el promedio de certámenes
- NL el promedio de laboratorio
- NF la nota final.

Escriba un programa que pregunte al usuario las notas de los dos primeros certamen y la nota de laboratorio, 
y muestre la nota que necesita el alumno para aprobar el ramo con nota final 60.
 

// Output

Ingrese la nota del 1 certamen: 45                                                                                              
Ingrese la nota del 2 certamen: 55                                                                                              
Ingrese la nota del laboratorio: 65                                                                                             
                                                                                                                                
La nota final esta dada por la siguiente ecuacion:  NF = NC*0.7 + NL*0.3                                                        
donde NC esta dado por:    NC = (C1 + C2 + C3)/3                                                                                
                                                                                                                                
                                                                                                                                
La nota necesaria es: 71 

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Variables globales

// Funciones

// Main
int main()
{
    int certamen=0,NF=60,NC;
    int nota[3], labo;
    int flag_fin_do_while=1;
    
    do
    {
        printf("Ingrese la nota del %d certamen: ",certamen+1);
        scanf("%d",&nota[certamen]);
        
        if(nota[certamen]>100 || nota[certamen]<1)
        {
            printf("Valor incorrecto! Ingrese la nota nuevamente.");
        }
        else
        {
            certamen++;
        }
        
        if (certamen>=2)
        {
            printf("Ingrese la nota del laboratorio: ");
            scanf("%d",&labo);
            flag_fin_do_while=0;
        }
        
    }while(flag_fin_do_while);
    
    printf("\nLa nota final esta dada por la siguiente ecuacion:  NF = NC*0.7 + NL*0.3\ndonde NC esta dado por:    NC = (C1 + C2 + C3)/3\n\n");

    NC = (NF - labo*0.3)/0.7;
    
    nota[2]=NC*3-nota[0]-nota[1];
    
    printf("\nLa nota necesaria es: %d\n",nota[2]);
}




