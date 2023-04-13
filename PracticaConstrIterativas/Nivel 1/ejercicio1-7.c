/*Pida un número entero entre 1 y 15 (controlar esto)
y muestre el mismo número de asteriscos por pantalla*/

#include <stdio.h>

int main()
{
    int numeroAIngresar;
    
    printf("Ingrese un numero entre 1 y 15:\n");
    scanf("%d", &numeroAIngresar);

    if(numeroAIngresar >= 1 && numeroAIngresar <=15 )
    {
        for(int i = 1; i <= numeroAIngresar; i++)
        {
            printf("* ", i);
        }
    }
    else
    {
        printf("El numero no está entre 1 y 15\n");
    }

    return 0;
}