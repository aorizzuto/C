/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Leer y escribir palabra

*******************************************************************************/

#include <stdio.h>

int main()
{
    char palabra[]="";
    
    printf("Ingrese una palabra\n\n");
    
    scanf("%s",palabra);
    
    printf("\nLa palabra fue: %s", palabra);

    return 0;
}
