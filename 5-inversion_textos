/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Ejemplo 5

Inversion de textos


// Output

En este ejemplo se invertira el orden de los numeros. Ingrese 's' para salir                                                    
                                                                                                                                
Ingrese el valor: 12345                                                                                                         
El ingreso invertido es: 54321                                                                                                  
                                                                                                                                
Ingrese el valor: alejandro                                                                                                     
El ingreso invertido es: ordnajela                                                                                              
                                                                                                                                
Ingrese el valor: archipielago                                                                                                  
El ingreso invertido es: ogaleipihcra 

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Variables globales

// Funciones

void invertir_numero(char *str,char *ret){
    int i=0,longitud=0;
    
    longitud = strlen(str);
    
    for(i=0;i<longitud;i++)
    {
        ret[i] = str[longitud-i-1];
    }
    
    ret[i]=NULL;
}


// Main
int main()
{
    char input[20], output[20];
    
    printf("En este ejemplo se invertira el orden de los numeros. Ingrese 's' para salir");
    
    do
    {
        printf("\n\nIngrese el valor: ");
        
        scanf("%s",input);
        
        invertir_numero(input,output);
        
        printf("El ingreso invertido es: %s",output);
        
    }while(strcmp(input,"s")!=0);
}




