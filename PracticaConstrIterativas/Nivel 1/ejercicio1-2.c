/*Muestre los números impares que hay entre 1 y 100.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    printf("Lista de impares que hay entre 1 y 100:\n");
    for(int i=1; i <= 100;i++)
    {
        if(i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}