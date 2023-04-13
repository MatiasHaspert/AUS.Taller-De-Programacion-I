/*Muestre la suma de todos los números impares que van del 1 al 100*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int sumaImpares;

    printf("Lista de impares que hay entre 1 y 100:\n");
    for(int i=1; i <= 100;i++)
    {
        if(i % 2 == 1)
        {
            printf("%d\n", i);

            sumaImpares = sumaImpares + i; 
        }

        
    }

    printf("La suma de los numeros impares entre 1 y 100 es:%d\n",sumaImpares);

    return 0;
}