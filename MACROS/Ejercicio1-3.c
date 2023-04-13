#include <stdio.h>
#include <stdlib.h>

#define PAR(X)  (X%2==0)?1:0

int main()
{
    int num1;

    printf("Ingrese un numero y te dire si es par o impar:\n");
    scanf("%d",&num1);

    if(PAR(num1)>0){

        printf("El numero %d es par!!\n", num1);
    }
    else {
        printf("el numero %d es impar!!\n");
    }

    return 0;                                                
}