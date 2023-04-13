/*
Crear una función que recibe un entero positivo menor o igual a a 10 e imprima por pantalla una pirámide similar a esta.
 Ejemplo para 5. Tip: tener en cuenta los espacios y antes de programar pensar en el algoritmo.
*/

#include <stdio.h>

void armaPiramide (int );

int main()
{
    int numero;

    printf("Ingrese un entero positivo menor o igual a 10 e imprimiré por pantalla una pirámide:\n");

    do
    {
        printf("> ");
        scanf("%d",&numero);

    }while(numero <= 0 || numero > 10);

    armaPiramide(numero);

    return 0;
}

void armaPiramide(int numero)
{
    int i,j,k,x;

    for ( i = 1; i <= numero; i++)
    {
        for (j = i; j < numero; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= i;k++)
        {
            printf("%d ",k);
        }
        for(x = i; x > 1; x--)
        {
            printf("%d ", x - 1);
        }
        printf("\n");
    }
    

}

