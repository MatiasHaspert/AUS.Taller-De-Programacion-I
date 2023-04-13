#include <stdio.h>
// mostrar los numeros perfectos del 1 al 10000

#define N 10000

int main()
{
    int sumaDivisores = 0;

    printf("Numeros perfectos del 1 al 10000:\n");

    for(int i = 1; i <= N; i++ )
    {   
        sumaDivisores = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sumaDivisores = sumaDivisores + j;  
            }
        }

        if(sumaDivisores == i)
        {
            printf("El numero %d es un numero perfecto\n", i);
        }
    }

    return 0;
}