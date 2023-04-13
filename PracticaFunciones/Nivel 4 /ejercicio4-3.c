/*
Crear una función recursiva para sumar los elementos de un array.
*/

#include <stdio.h>

int sumaArray(int [], int );

int main()
{
    int array[4];
    int n = 3;
    int rta;

    printf("Ingresa valores al array y daré su suma recursiva:\n");

    for(int i = 0; i < 4;i++)
    {
        printf("%d)> ",i+1);
        scanf("%d",&array[i]);

    }

    rta = sumaArray(array,n);

    printf("La suma recursiva del array es %d.\n", rta);

    return 0;
}

int sumaArray (int array[], int posArray)
{
    if(posArray == 0)
    {
        return array[0];
    }
    else
    {
        return array[posArray] + sumaArray(array,posArray - 1);
    }

}