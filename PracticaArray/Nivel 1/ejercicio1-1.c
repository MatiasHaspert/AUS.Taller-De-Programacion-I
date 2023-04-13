/*Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos 
entre el -10 y el 10 (asegurar esto) y luego lo
muestre por pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miArray[10];
    int i;

    printf("Ingrese 10 numeros entre -10 y 10:\n");

    for(i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d", &miArray[i]);

        if( miArray[i] < -10 || miArray[i] > 10)
        {
            printf("POR FAVOR INGRESE UN NUMERO ENTRE -10 Y 10\n");

            i--;
        }
    }

    printf("Los 10 numeros ingresados son:\n");
    for( i = 0; i < 10; i++)
    {
        printf("%d  ", miArray[i]);
    }

    return 0;
    
}