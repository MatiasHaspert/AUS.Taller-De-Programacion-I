#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int valor = 0;

    for (i = 1; i <= 100; i++)
    {
        if(i % 15 == 0)
        {
            printf("FIZZBUZZ ");
        }
        else if (i % 3 == 0)
        {
            printf("FIZZ ");
        }
        else if(i % 5 == 0)
        {
            printf("BUZZ ");
        }
        else
        {
            printf("%d ",i);
        }
    }
    




    return EXIT_SUCCESS;
}