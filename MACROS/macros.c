#include <stdio.h>

#define AÑO -2022
#define POSITIVO(X) (X>0)?1:0

int main()
{
    printf("Hola año %d\n", AÑO);

    if(POSITIVO(AÑO)>0){

        printf("El año %d es positivo!!\n", AÑO);
    }

    return 0;

}

