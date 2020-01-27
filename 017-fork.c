

// ############### C ############3
// Utilizando FORK

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(void)
{
    pid_t childpid;
    
    if((childpid = fork()) == -1)
    {
        perror("fork");
        exit(1);
    }
    
    if(childpid == 0)
    {   
        int cont = 0;
        while(cont < 10)
        {
            printf("\nEl contador del hijo es: %d",cont);
            cont++;
        }
    }
    else
    {
        int cont2 = 0;
        while(cont2 < 10)
        {
            printf("\nEl contador del padre es: %d",cont2);
            cont2++;
        }
    }
    return(0);
}
