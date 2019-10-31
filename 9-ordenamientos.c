/******************************************************************************
Autor: Alejandro Rizzuto 
Lenguaje: C
Ejemplo 9

        ORDENAMIENTO DE NUMEROS
 
// Output

Ingrese numero 1: 5                                                                                                             
Ingrese numero 2: 1                                                                                                             
Ingrese numero 3: 7                                                                                                             
Ingrese numero 4: 2                                                                                                             
Ingrese numero 5: 4                                                                                                             
                                                                                                                                
Ordenado por burbuja: 1 2 4 5 7                                                                                                 
Ordenado por shell: 1 2 4 5 7                                                                                                   
Ordenado por Insercion: 1 2 4 5 7 

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

// Variables globales
int numero[5],ordenados[5];

// Funciones
void ordenar_burbuja(int *numeros,int n)
{
    int aux;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(numeros[j]>numeros[j+1])
            {
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }

    printf ("\nOrdenado por burbuja: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",numeros[i]);
    }
}

void ordenar_shell(int *numeros, int n)
{
    int inter=(n/2),j=0,k=0,aux;

    while(inter>0)
    {
        for(int i=inter;i<n;i++)
        {
            j=i-inter;
            while(j>=0) 
            {
                k=j+inter;
                if(numeros[j]<=numeros[k])
                {
                    j--;
                }
                else
                {
                    aux=numeros[j];
                    numeros[j]=numeros[k];
                    numeros[k]=aux;
                    j=j-inter;
                }
            }
        }
        inter=inter/2;
    }

    printf ("\nOrdenado por shell: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",numeros[i]);
    }
}

void ordenar_insercion(int *numeros, int n)
{
    int aux, j, contador, posicion, flag;
    
    for(int i=1;i<n;i++)
    {
        j = i;
        aux = numeros[i];
        flag = 0;
        
        while(j!=0)
        {
            if (aux < numeros[j-1])
            {
                numeros[j]=numeros[j-1];
                posicion = j-1;
                flag=1;
            }
            j--;
        }
        
        if (flag)
        {
            numeros[posicion]=aux;
        }
    }

    printf ("\nOrdenado por Insercion: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",numeros[i]);
    }
}

void copia(int *numeros, int *ordenados, int n)
{
    for(int i=0;i<n;i++)
    {
        numeros[i]=ordenados[i];
    }
}

// Main
int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&ordenados[i]);
    }
    
    copia(numero,ordenados,n);
    ordenar_burbuja(numero,n);
   
    copia(numero,ordenados,n);
    ordenar_shell(numero,n);
    
    copia(numero,ordenados,n);
    ordenar_insercion(numero,n);
    
}
