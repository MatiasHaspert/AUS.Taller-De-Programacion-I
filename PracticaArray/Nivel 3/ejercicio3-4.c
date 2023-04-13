/*Declarar un array A de 15 elementos enteros. Solicitar al usuario el ingreso de un valor por vez
e ir colocando dicho entero en el array, donde cada elemento previo existente en el array A
deba ser menor o igual y cada elemento posterior deba ser mayor al que elusuario ingresó.
En cada paso mostrar el estado del array. Al finalizar deberá quedar el array ordenado de forma ascendente.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 15

int main()
{
    int A[N];
    int i,j;
    printf("Ingrese 15 enteros de forma ascendente:\n");

    for(i = 0; i < N; i++)
    {
        do
        {   
            //le pido que ingrese valores
            printf("Ingrese el valor %d: ", i+1);
            scanf("%d",&A[i]);

            //voy mostrando el estado del array
            printf("Estado del array: \n");
            printf("{ ");
            for (j = 0; j <= i; j++)
            {
                printf("%d ", A[j]);
            }
            printf(" }\n");

            //le aviso que ingrese los valores de forma ascendente
            if(A[i] <= A[i - 1])
            {
                printf("Ingrese el valor de forma ascendente!!\n");
            }
        }while(A[i] <= A[i - 1]);

        
    }
    printf("\n");

    //muestro el array
    printf("Array dado por el usuario:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
