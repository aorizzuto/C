/******************************************************************************

*******************************************************************************/

/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 8

Cuando un huevo es hervido en agua, las proteínas comienzan a coagularse cuando la temperatura sobrepasa un 
punto crítico. A medida que la temperatura aumenta, las reacciones se aceleran.
En la clara, las proteínas comienzan a coagularse para temperaturas sobre 63°C, mientras que en la yema lo hacen 
para temperaturas sobre 70°C. Para hacer un huevo a la copa, la clara debe haber sido calentada lo suficiente 
para coagularse a más de 63°C, pero la yema no debe sobrepasar los 70°C para evitar obtener un huevo duro.

El tiempo en segundos que toma al centro de la yema alcanzar Ty °C está dado por la fórmula:

t=[(M^(2/3)*c*ρ^(1/3)) / (K*π^2*(4π/3)^(2/3) ] * ln[0.76*(To−Tw)/(Ty−Tw)],
donde:
- M es la masa del huevo
- ρ su densidad
- c su capacidad calorífica específica
- K su conductividad térmica. 

Algunos valores típicos son:

M=47[g] para un huevo pequeño y M=67[g] para uno grande,
ρ=1.038[gcm−3],
c=3.7[Jg−1K−1], y
K=5.4⋅10−3[Wcm−1K−1].
Tw es la temperatura de ebullición del agua y To la temperatura original del huevo antes de meterlo al agua, 
ambos en grados Celsius.

Escriba un programa que reciba como entrada la temperatura original del huevo y muestre como salida el tiempo 
en segundos que le toma alcanzar la temperatura máxima para prepararlo a la copa.
 
// Output

Ingrese 0 si el huevo es pequeño o 1 si el huevo es grande: 1                                                                   
Ingrese el valor de tempertura a la que se encuentra el huevo: 25.4                                                             
                                                                                                                                
El tiempo que se debe dejar el huevo en el agua es de: 33.5 segundos. 

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Variables globales


// Funciones

float formula_tiempo(int huevo, float To)  // Formula que calcula el tiempo necesario
{
    long M;          // [g]
    float p=1.038;   // [gcm-3]
    float c=3.7;     // [Jg-1K-1]
    float K=0.0054;  // [Wcm-1K-1]
    float pi=3.14159265359;
    long Tw=100;     // Temp de ebullición del agua
    long Ty=65;      // Temp para tener huevo a la copa
    
    if (huevo)
    {        M=47;    }
    else
    {        M=67;    }
    
    return ((pow(M,2/3)*c*pow(p,1/3)) / (K*pow(pi,2)*pow(4*pi/3,2/3))) * log(0.76*(To-Tw)/(Ty-Tw));
}

// Main
int main()
{
   int huevo=0;
   float To=0;
   float tiempo;
   
    printf("Ingrese 0 si el huevo es pequeño o 1 si el huevo es grande: ");
    scanf("%d",&huevo);
    
    printf("Ingrese el valor de tempertura a la que se encuentra el huevo: ");
    scanf("%f",&To);
        
    tiempo = formula_tiempo(huevo,To);
    
    printf("\nEl tiempo que se debe dejar el huevo en el agua es de: %.1f segundos.",tiempo);
}
