/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 11

        DIBUJOS DE ASTERISCOS
 
// Output

Ingresar lado: 3                                                                                                                
                                                                                                                                
  ***                                                                                                                           
 *****                                                                                                                          
*******                                                                                                                         
 *****                                                                                                                          
  ***                                                                                                                           
                                                                                                                                
Ingresar lado: 2                                                                                                                
                                                                                                                                
 **                                                                                                                             
****                                                                                                                            
 **             

Ingresar lado: 4                                                                                                                
                                                                                                                                
   ****                                                                                                                         
  ******                                                                                                                        
 ********                                                                                                                       
**********                                                                                                                      
 ********                                                                                                                       
  ******                                                                                                                        
   ****                                                                                                                         
                                                                                                                                
Ingresar lado: 5                                                                                                                
                                                                                                                                
    *****                                                                                                                       
   *******                                                                                                                      
  *********                                                                                                                     
 ***********                                                                                                                    
*************                                                                                                                   
 ***********                                                                                                                    
  *********                                                                                                                     
   *******                                                                                                                      
    *****               

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

// Variables globales
int lado,espacios;

// Funciones

void dibujar(int lado)
{
    int lado_original = lado;
    espacios = lado -1;

    for(int i=0;i<(lado_original*2)-1;i++)
    {
        for(int j=0;j<lado+espacios*2;j++)
        {
            if(j<espacios || j>=espacios+lado)
            {
                printf(" ");
            }
            else 
            {
                if(j<espacios+lado)
                {
                    printf("*");
                }
            }
        }
        
        printf("\n");
        
        if(i<lado_original-1)
        {
            espacios--;
            lado = lado+2;        
        }
        else
        {
            espacios++;
            lado = lado-2;
        }
    }
}

// Main
int main()
{
    while(1)
    {
        printf("\nIngresar lado: ");
        scanf("%d",&lado);
        printf("\n");
    
        dibujar(lado);
    }
    
    return 0;
}
