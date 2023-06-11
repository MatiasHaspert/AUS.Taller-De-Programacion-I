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
        for(j = 0; j <= k; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    

    return 0;
}