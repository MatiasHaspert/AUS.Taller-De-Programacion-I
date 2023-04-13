/*que el usuario ingrese 5 numeros y calcular su promedio*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, promedio;
    float sumatioria = 0;
    int i = 0;
    

    printf("Ingrese 5 números y calculare su promedio\n");

    //EJERCICIO CON FOR
    /*for(int i = 0;i < 5;i++ )
    {
        printf("Ingrese un número:\n");
        scanf("%f",&numero);

        sumatioria = sumatioria + numero;
    }

    promedio = sumatioria / 5;

    printf("El promedio de los 5 numeros ingresados es:%f\n", promedio);
    */
    //EJERCICIO CON WHILE 
    
    while(i < 5)
    {
        printf("Ingrese un número:\n");
        scanf("%f",&numero);

        sumatioria = sumatioria + numero;

        i++;
    }

    promedio = sumatioria / 5;

    printf("El promedio de los 5 numeros ingresados es:%f\n", promedio);

    return 0; 
}