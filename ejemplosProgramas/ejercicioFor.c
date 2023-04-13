#include <stdio.h>
#include <stdlib.h>

int main()
{   
    printf("Lista de numeros pares:\n");

    for(int i = 0; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
           printf("%d\n",i); 
        }
        
    }

    printf("Termino la cuenta\n");

    return 0;
}