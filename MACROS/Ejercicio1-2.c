#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y)  (X>Y)?(X):(Y)

int main()
{
    int num1;
    int num2;
    int acumulador;
    printf("Te dire el maximo entre dos numeros\n");
    printf("Ingrese un numero:\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero:\n");
    scanf("%d",&num2);

    if(num1==num2){

        printf("Los numeros son iguales");

        return 0;
    }

    acumulador = MAX(num1,num2);

    printf("El minimo entre %d y %d es: %d\n", num1,num2,acumulador);

    return 0; 

}