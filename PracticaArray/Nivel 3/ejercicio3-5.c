/*Dado un array A de 20 enteros positivos en el rango [0, 100] cargados aleatoriamente, y un entero positivo e,
determinar si dicho entero e está presente en el array.
Extender luego el programa para indicar no solo si está, sino también en cuantas ocasiones aparece*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 20

int main()
{
    int A[N];
    int e;
    int i;
    int aparecimientos = 0;
    srand(getpid());
    
    //cargo el numero e aleatoriamente
    e = 1 + rand() %100;
    printf("Número %d:\n\n", e);

    // cargo el array aleatoriamente y lo muestro
    printf("Array: \n");
    for(i = 0; i < N; i++)
    {
        A[i] = 1 + rand() %100;
        
        if(A[i] == e)
        {
            aparecimientos++;
        }
        printf("%d ", A[i]);
    }
    printf("\n");

    if(aparecimientos == 0)
    {
        printf("El número %d nunca aparecio!\n", e);
    }
    else if(aparecimientos > 0)
    {
        printf("El numero %d aparecio %d veces!\n",e,aparecimientos);
    }
}