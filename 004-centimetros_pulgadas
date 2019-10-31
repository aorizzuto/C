/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C

Ejemplo 4

Cambio de magnitud


// Output

En este ejemplo se cambiará la magnitud de cm a pulgadas o viceversa.                                                         
                                                                                                                              
Ingrese el valor. Ej: 2,5cm o 7,1"  --> 2,2cm                                                                                 
2.20 cm  -->  5.59 "                                                                                                          
                                                                                                                              
Ingrese el valor. Ej: 2,5cm o 7,1"  --> 3,5"                                                                                  
3.50 "  -->  1.38 cm

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Prototipos
//separar_valor_de_magn(char input); // Separo el valor de la magnitud y los guardo en dos variables indeptes

// Variables globales

// Funciones

char* reemplazar_char(char* str, char buscar, char reemplazo){
    char *pos_actual = strchr(str,buscar);
    while (pos_actual){
        *pos_actual = reemplazo;
        pos_actual = strchr(pos_actual+1,buscar);
    }
    return str;
}

int separar_valor_de_magn(char input[], float *intensidad)
{
    char *delimitador[2] = {"cm","\""};
    char *valor="";
    int magnitud = 0;
    
    if (strstr(input,delimitador[0]))
    {
        magnitud = 0;
    }
    else if (strstr(input,delimitador[1]))
    {
        magnitud = 1;
    }
    else
    {
        return -1;
    }
    
    valor = strtok(input, delimitador[magnitud]);
    valor = reemplazar_char(valor,',','.');
    
    *intensidad = strtof(valor,NULL);

    return magnitud;
    
}



// Main
int main()
{
    char input[]="";
    float intensidad=0,pulgada=2.54;
    int magnitud;
    
    printf("En este ejemplo se cambiará la magnitud de cm a pulgadas o viceversa.");
    
    do
    {
        printf("\n\nIngrese el valor. Ej: 2,5cm o 7,1\"  --> ");
        
        scanf("%s",input);
        
        magnitud = separar_valor_de_magn(input, &intensidad);
        
        switch (magnitud)
        {
            case 0: 
                printf("%.2f cm  -->  %.2f \"",intensidad,intensidad*pulgada);
                break;
            case 1: 
                printf("%.2f \"  -->  %.2f cm",intensidad,intensidad/pulgada);
                break;
            default: printf("Magnitud erronea.\n\n");break;
        }
    }while(strcmp(input,"s")!=0);
}




