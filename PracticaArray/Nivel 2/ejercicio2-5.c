/*
Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el rango
[-(N-1), N-1].
El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones a izquierda
 (en caso de r negativo) sobre los elementos del
array A. Una rotación es el cambio de posición en los elementos del array.
Ejemplo, un array A con N valiendo 10, r estará comprendido en [-9, 9].
Es decir, dado el array
A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1],
Si r= 1 ⇒ A= [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ] Todos los elementos rotaron 1 posición a la derecha
Si r=-3 ⇒ A= [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ] Todos los elementos rotaron 3 posiciones a la izquierda
*/

#include <stdio.h>
#define N 10

int main()
{
    // Declaro variables
    int i, j, r, pivote, copia_r;
    int A[N];
    // creacion de array
    
    printf("Ingrese los valores enteros del array\n");
    for(i = 0; i < N; i++)
    {
        printf("Ingrese el valor %d:\n", i + 1);
        printf("> ");
        scanf("%d", &A[i]);
    }
    // ingreso de valor de rotacion
    do
    {
        printf("ingrese un valor para rotar el array entre %d y %d\n", -(N - 1), N - 1);
        scanf("%d", &r);
    } while (r < -(N - 1) || r > N - 1);
    copia_r = r;
    // array original por pantalla
    printf("El array original es:\n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    // rotacion de array
    if (r < 0)
    {
        r = N + r;
    }
    while (r > 0)
    {
        //pivote = valor en la pos 9
        pivote = A[N - 1];
        for (j = N - 2; j >= 0; j--)    
        {
            A[j + 1] = A[j];
        }
        A[0] = pivote; //en la posicion 0 siempre vale el valor de la pos 9(la ultima)
        r--;    // el for lo haces r veces
    }
    
    // impresion de su rotacion
    if (copia_r !=0)
    {
        printf("El array rotado en %d es:\n", copia_r);
        printf("{ ");
        for (i = 0; i < N; i++)
        {
            printf("%d ", A[i]);
        }
        printf("}\n");
    }
    else if (copia_r == 0)
    {
        printf("No quiere rotarlo???\n");
    }
    return 0;
}