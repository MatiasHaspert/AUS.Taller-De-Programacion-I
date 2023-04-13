#include <stdio.h>

int main()
{
    int i,j, k;

    for ( k = 0; k <= 9; k++) // ALTURA DE LA PIRAMIDE 
    {   
        for(i = 0; i < 9 - k; i++)
        {
            printf(" ");
        }
        for(i = 0; i <= k; i++)
        {
            printf("* ");
        }

        printf("\n");
    }
    

    return 0;
}