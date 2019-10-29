/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Calculo del area y perimetro de un circulo

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    float radio, area, perimetro, pi;
    
    pi=3.14159265359;
    
    printf("En este ejemplo calcularemos el perímetro y el area de un circulo en funcion al radio indicado.\n\n");
    printf("Ingrese un valor para el radio: ");
    
    scanf("%f",&radio);
    
    if(radio > 0)
    {
        area = pi*radio*radio;
        perimetro = 2*pi*radio;
    
        printf("\n\nEl area del circulo es: %f", area);
        printf("\nEl perimetro del circulo es: %f", perimetro);
    }
    else
    {
        printf("\n\nSe ha ingresado un valor incorrecto.");
    }
}
