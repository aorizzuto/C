/******************************************************************************
List handling
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> 

// -----------------------------------------------

// Struct
typedef struct node                             // Estructura de un nodo
{ 
  int data; 
  struct node *next; 
  struct node *prev;
}NODE; 

// -----------------------------------------------

// Prototypes
NODE *Create_node(int data);                    // To create a new node

int List_insert_start(NODE **head, int data);   // Insert a new node at the beginning of the list
int List_insert_end(NODE **head, int data);     // Insert a new node at the end of the list
//int List_insert_position(NODE **head, int data, int position);  // Insert a new node at specific position
int List_drop_value(NODE **head, int data);     // Remove the first node with same value
int List_drop_first(NODE **head);               // Remove first node
int List_drop_last(NODE **head);                 // Remove last node

void printList(NODE *head);                     // Print the list


// -----------------------------------------------
  
int List_drop_value(NODE **head, int data)      // head = inicio ; data = info que quiero borrar
{
    NODE *curr=*head, *prev=NULL, *next=NULL;   // Inicializo curr = inicio
    
    while(curr != NULL)                         // Si curr == NULL --> No hay nodos en la lista
    {
        if(curr->data == data)                  // Si data de donde estoy parado es la que busco
        {
            if(curr == *head)                   // Si el que se encontró es la cabecera
            {
                *head=curr->next;               // Coloco el próximo en la cabecera
                if(curr->next != NULL)
                {
                    curr->next->prev=NULL;
                }
            }
            else if(curr->next ==NULL)          // Si el que se encontró es el final
            {
                prev = curr->prev;
                curr->prev=NULL;
                prev->next=NULL;
            }
            else                                // Si el que se encontró está por el medio
            {
                prev = curr->prev;
                curr->prev=NULL;
                next = curr->next;
                curr->next=NULL;
                prev->next = next;
                next->prev = prev;
            }
            free(curr);
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}

// -----------------------------------------------

int List_insert_end(NODE **head, int data)
{
    NODE *new=NULL;
    NODE *naux = *head;
    
    new = Create_node(data);
    if(new != NULL)
    {
        while(naux->next != NULL)
        {
            naux=naux->next;
        }
    
        new->prev=naux;
        naux->next=new; 
        
        return 1;
    }
    
    return 0;
}

// -----------------------------------------------

void printList(struct node *head) 
{ 
    NODE *naux = head;
    int counter=0;
    while (naux != NULL) 
    { 
        counter++;
        printf("%d: %d\n",counter,naux->data); 
        naux = naux->next; 
    } 
} 

// -----------------------------------------------

NODE *Create_node(int data)
{
    NODE *new=NULL;
    new=(NODE*)malloc(sizeof(NODE));
    
    if(new!=NULL) // Prev step was success
    {
        new->data=data;
        new->next=NULL;
        new->prev=NULL;
    }
    
    return new;
}

// -----------------------------------------------

int List_insert_first(NODE **head, int data)
{
    NODE *new =NULL;
    
    new = Create_node(data);
    
    if(new!=NULL)
    {
        new->next=*head;
        new->prev=NULL;
        if(*head != NULL) 
        {
            (*head)->prev=new;
        }
        *head=new;
        
        return 1;
    }
    return 0;
}

// -----------------------------------------------

int List_drop_first(NODE **head)
{
    NODE *curr=*head, *prev=NULL, *next=NULL;   // Inicializo curr = inicio

    *head=curr->next;               // Coloco el próximo en la cabecera
    if(curr->next != NULL)
    {
        curr->next->prev=NULL;
    }

    free(curr);
    return 1;
}

// -----------------------------------------------

int List_drop_last(NODE **head)
{
    NODE *curr=*head, *prev=NULL, *next=NULL;   // Inicializo curr = inicio
    
    while(curr != NULL)                         // Si curr == NULL --> No hay nodos en la lista
    {
        if(curr->next ==NULL)          // Si el que se encontró es el final
        {
            prev = curr->prev;
            curr->prev=NULL;
            prev->next=NULL;
            free(curr);
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}

// -----------------------------------------------

int main() 
{ 
    NODE *lista1 = NULL;   
    
    List_insert_first(&lista1,888);  // Ingreso al inicio
    List_insert_first(&lista1,777);  // Ingreso al inicio
    List_insert_first(&lista1,666);  // Ingreso al inicio
    List_insert_first(&lista1,555);  // Ingreso al inicio
    List_insert_first(&lista1,444);  // Ingreso al inicio
    List_insert_first(&lista1,333);  // Ingreso al inicio
    List_insert_first(&lista1,222);  // Ingreso al inicio
    List_insert_first(&lista1,111);  // Ingreso al inicio
    List_insert_end(&lista1,999);   // Ingreso al final
    
    List_drop_value(&lista1,555);    // Elimino valor 3333
    List_drop_first(&lista1);        // Elimino primer elemento (111)
    List_drop_last(&lista1);         // Elimino el último elemento (999)

    printList(lista1);               // Imprimo lista
    
    return 0; 
}

// -----------------------------------------------