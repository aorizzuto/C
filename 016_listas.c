/******************************************************************************
List handling
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h> 

// Struct
typedef struct node  
{ 
  int data; 
  struct node *next; 
  struct node *prev;
}NODE; 

// Prototypes
NODE *Create_node(int data);                // To create a new node
int Insert_start(NODE **head, int data);    // Insert a new node at the beginning of the list
void printList(NODE *head);                 // Print the list
int Insert_end(NODE **head, int data);      // Insert a new node at the end of the list
int Drop_node(NODE **head, int data);       // Remove the first node with same value
  
int Drop_node(NODE **head, int data)
{
    NODE *curr=*head, *prev=NULL, *next=NULL;
    
    while(curr != NULL)
    {
        if(curr->data == data)
        {
            if(curr == *head)
            {
                *head=curr->next;
                if(curr->next != NULL)
                {
                    curr->next->prev=NULL;
                }
            }
            else if(curr->next ==NULL)
            {
                prev = curr->prev;
                curr->prev=NULL;
                prev->next=NULL;
            }
            else
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

int Insert_end(NODE **head, int data)
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

int Insert_start(NODE **head, int data)
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

int main() 
{ 
    NODE *head = NULL;   
    
    Insert_start(&head,1);
    Insert_start(&head,5);
    Insert_start(&head,24);
    Insert_start(&head,2);
    Insert_end(&head,33);
    
    Drop_node(&head,1);

    printList(head);
    
    return 0; 
}
