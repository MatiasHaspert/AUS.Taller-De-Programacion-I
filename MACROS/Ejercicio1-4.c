#include <stdio.h>
#include <stdlib.h>

#define DIVISIBLE(X,Y) (X%Y==0)?1:0

int main()
{
    int num1,num2;

    printf("Te dire si un numero es divisble de otro\n");
    printf("Ingrese un numero:\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero:\n");
    scanf("%d",&num2);

    if(DIVISIBLE(num1,num2)>0){

        printf("el numero %d es divisible de %d", num1,num2);
    }
    else{
        printf("el numero %d no es divisible de %d",num1,num2);
    }

    return 0;

}
