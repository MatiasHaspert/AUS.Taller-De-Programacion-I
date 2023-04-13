/*Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
- iguales: cuando cada componente ubicada en misma posición coincide.
- similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide
- diferentes: cuando no coinciden ni en las componentes ni en la suma*/

#include <stdio.h>
#include <stdlib.h>

#define J 10

int main()
{
    int M[J];
    int N[J];
    int i;
    int sumaM = 0;
    int sumaN = 0;
    int iguales = 0;

    //CARGO LOS VALORES A LOS ARRAYS
    printf("Ingrese 10 enteros entre 0 y 50 al vector M: \n");

    for(i = 0; i < J; i++)
    {
        printf("> ");
        scanf("%d", &M[i]);

        if(M[i] < 0 || M[i] > 50)
        {
            printf("Por favor, ingrese un entero entre 0 y 50:\n");

            i--;
        }

        sumaM+= M[i];
    }

    printf("Ingrese otros 10 enteros entre 0 y 50 al vector N: \n");

    for(i = 0; i < J; i++)
    {
        printf("> ");
        scanf("%d", &N[i]);

        if(N[i] < 0 || N[i] > 50)
        {
            printf("Por favor, ingrese un entero entre 0 y 50:\n");

            i--;
        }

        sumaN+=N[i]; 
    }

    // MUESTRO LOS VALORES DE LOS ARRAYS
    printf("El array M es: \n");
    printf("[ ");
    for (i = 0; i < J; i++)
    {
        printf("%d, ", M[i]);
    }
    printf("]\n");
    printf("El array N es: \n");
    printf("[ ");
    for (i = 0; i < J; i++)
    {
        printf("%d, ", N[i]);
    }
    printf("]\n");

    for(i = 0; i < J; i++)
    {
        if(M[i] == N[i])
        {
            iguales++;
        }
    }
    
    if(iguales == J)
    {
        printf("Los vectores son iguales!!\n");
    }
    else if(sumaM == sumaN)
    {
        printf("Los vectores son similares frente a suma!\n");
        printf("Su suma es: %d\n", sumaM);
    }
    else
    {
        printf("Los vectores son diferentes!\n");
    }

    return 0;
}