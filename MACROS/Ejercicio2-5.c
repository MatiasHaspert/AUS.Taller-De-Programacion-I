#include <stdio.h>

#define ENTRE0Y100(X)  ((X)>0 && (X)<100)?1:0

int main()
{
    int num;

    printf("Te dire si el numero ingresado está entre 0 y 100\n");
    printf("Ingrese un número:\n");
    scanf("%d",&num);

    if(ENTRE0Y100(num)>0){

        printf("El número %d se encuentra entre 0 y 100", num);
    }
    else{
        printf("El número %d no se encuentra entre 0 y 100", num);
    }
    
}