#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGO 100
#define INTENTOS 10

int main()
{
    int cant_intentos = 0;
    int intento;
    int secreto;

    printf("Adivina el número entre 1 y 100:\n");
    printf("Trate de adivinar mi número secreto:\n");
    srand(time(NULL));
    secreto = 1 + rand() %RANGO;

    do
    {
        printf("\nIntento %d: ",cant_intentos+1);
        scanf("%d",&intento);


        if(intento < secreto)
        {
            printf("\nEl número secreto es mayor!\n");
            cant_intentos++;
        }
        else if (intento > secreto)
        {
            printf("\nEl número secreto es menor\n");
            cant_intentos++;
        }

        if(intento == secreto)
        {
            printf("\nFelicitaciones! Acertaste con %d intentos.\n",cant_intentos+1);
            printf("El número secreto es %d.\n",secreto);

            return EXIT_FAILURE;
        }

    }while(cant_intentos < INTENTOS);

    if(cant_intentos == INTENTOS)
    {
        printf("\nPerdiste!!\n");
        printf("\nEl número secreto era %d.\n",secreto);
    }

    return 0;

}