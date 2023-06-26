/*Declare un array A de N floats, se realice la carga manual y 
pida al usuario un float f en el rango (0, 100] y en un nuevo array P
establezca los elementos de esta forma. Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1.*/

#include <stdio.h>

#define N 10

int main()
{
    float A[N];
    float f;
    int i;
    float P[N];

    printf("Ingrese los valores de A:\n");

    for( i = 0; i < N; i++)
    {
        printf("Ingrese en A[%d]: \n", i+1);
        printf("> ");
        scanf("%f", &A[i]);
    }
    
    do
    {
        printf("Ingrese un float ente 0 y 100: \n");
        printf("> ");
        scanf("%f", &f);
    }while( f <= 0 || f > 100);

    printf("El array P es: \n");

    for( i = 0; i < 10; i++)
    {
        P[i] = A[i] * f;

        printf("P[%d] = %f \n", i+1 , P[i]);
    }

    return 0;
}