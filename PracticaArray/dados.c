/*se lanza un dado N veces y se muestran estadisticas de aparcicion de cada numero*/

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#define N 100
int main()
{
    int array[N];
    int cantidades[6] = {0,0,0,0,0,0}; // en cant[0] se guarda el 1... cant[5] se guarda el 6
    srand(getpid());
    int i;

    for( i = 0; i < N; i++)
    {
        array[i] = 1 + rand() %6;
        printf("%d ", array[i]);

        //contamos
        cantidades[ array [i] - 1 ]++;
    }

    printf("\n\n");
    int j;

    for(i = 0; i < 6; i++)
    {
        printf("Cantidad de veces que apareció el %d:\n", i+1);

        for( j = 0; j < cantidades[i]; j++)
        {
            printf("*");
        }

        printf("(%d)\n", cantidades[i]);
    }
    
    
    return 0;
}