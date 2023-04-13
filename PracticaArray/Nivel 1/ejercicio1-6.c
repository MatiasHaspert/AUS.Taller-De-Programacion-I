/*Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y
muestre por pantalla dichos elementos junto con la suma, el
promedio y la varianza. Investigar sobre los términos que desconozca*/

#include <stdio.h>

int main()
{
    int array[10];
    float sumatoria = 0;
    float promedio = 0;
    float sumavarianza = 0;
    float varianza = 0;
    int i;

    printf("Ingrese 10 enteros: \n");

    for(i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d", &array[i]);

        if(array[i] < 0 || array[i] > 100)
        {
            printf("Por favor ingrese un entero entre 0 y 100.\n");

            i--;
        }
    }

    // SUMATORIA Y PROMEDIO

    for( i = 0; i < 10; i++)
    {
        sumatoria = sumatoria + array[i];

    }

    promedio = sumatoria / 10;

    // VARIANZA

    for( i = 0; i < 10; i++)
    {
        sumavarianza += (array[i] - promedio) * (array[i] - promedio);
    }

    varianza = sumavarianza / 10;

    //MUESTRO TODO

    printf("Los numeros ingresados son:  \n");

    for ( i = 0; i < 10; i++)
    {
        printf("> %d \n", array[i]);
    }

    printf("La suma de los 10 enteros ingresados es: %f\n", sumatoria);
    printf("El promedio es: %f\n", promedio);
    printf("La varianza es: %f\n", varianza);

    return 0;
    
}