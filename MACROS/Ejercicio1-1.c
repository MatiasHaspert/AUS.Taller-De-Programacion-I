#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y)  (X<Y)?(X):(Y)

int main()
{
    int num1;
    int num2;
    
    printf("Te dire el mínimo entre dos numeros\n");
    printf("Ingrese un numero:\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero:\n");
    scanf("%d",&num2);

    if(num1==num2){

        printf("Los numeros son iguales");

        return 0;
    }

    printf("El minimo entre %d y %d es: %d\n", num1,num2,MIN(num1,num2));

    return 0; 

}