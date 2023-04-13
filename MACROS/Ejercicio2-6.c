#include <stdio.h>

#define CONSECUTIVOS(X,Y)  (X==Y + 1 || X==Y - 1)?1:0

int main()
{
    int num1, num2;

    printf("Ingrese dos numeros para saber si son consecutivos: \n");
    printf("Ingrese el primer numero: \n");
    printf("-> ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    printf("-> ");
    scanf("%d", &num2);

    if(CONSECUTIVOS(num1,num2)>0){

        printf("Los numeros %d y %d son consecutivos!!",num1,num2);
    }
    else{
        printf("Los numeros %d y %d NO son consecutivos!!",num1,num2);
    }

    return 0;
    
}