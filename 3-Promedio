/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Ejemplo 3

Calculo de promedio

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int cantidad=0;
float promedio=0;

int main()
{
    float nota=0;
    int flag_salir=0;
    
    char input[]="";
    
    printf("En este ejemplo calcularemos el promedio de las notas ingresadas.\n\n");
    
    do
    {
        printf("Presione \"s\" para Salir. Ingrese nota %d (Entre 1 y 10): ",++cantidad);
        scanf("%s",input);
        
        flag_salir = strcmp(input,"s");
        
        if(flag_salir != 0)
        {
            nota = strtol(input,NULL,10);
            
            if(nota < 1 || nota > 10)
            {
                printf("    Nota fuera de rango\n");
                cantidad--;
            }
            else
            {
                promedio += nota;
            }
        }
        
    }while(flag_salir);

    
    promedio = promedio/(cantidad-1);
    
    printf("\n\nEl promedio es: %f",promedio);
}
