/*Dado un array A de 10 ints cagado aleatoriamente y con valores comprendidos entre 0 y 100,
determinar si se tienen más elementos
pares que impares o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10

int main()
{
    int A[N];
    int cantPares = 0;
    int cantImpares = 0;
    int i;
    srand(getpid());

    printf("Valores del array:\n");
    printf("[ ");

    for(i = 0; i < N; i++)
    {
        A[i] = 1 + rand() %100;

        printf("%d ", A[i]);

        if(A[i] % 2 == 0)
        {
            cantPares++;
        }
        else if (A[i] % 2 == 1)
        {
            cantImpares++;
        }
    }
    printf("] \n");

    if(cantPares > cantImpares)
    {
        printf("En el array A hay más pares %d que impares %d\n", cantPares, cantImpares);
    }
    else if(cantImpares > cantPares)
    {
       printf("En el array A hay más impares %d que pares %d\n", cantImpares, cantPares); 
    }
    else if(cantPares == cantImpares)
    {
        printf("Los arrays tienen la misma cantidad de pares e impares!\n");
    }

    return 0;
}