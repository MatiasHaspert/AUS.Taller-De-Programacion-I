#include <stdio.h>

#define MAX(X,Y,Z)   ((X) > (Y) ? ((X) > (Z) ? (X) : (Z)) : ((Y) > (Z) ? (Y) : (Z)))

int main()
{
    int num1, num2, num3,a;
    printf("Ingrese tres numeros para saber cual es el mayor: \n");
    printf("Ingrese el primer numero: \n");
    printf("->");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    printf("->");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: \n");
    printf("->");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("Todos los numeros son iguales.\n");
        return 0;
    }
    if (num1 == num2 || num2 == num3 || num1 == num3)
    {
        printf("Hay dos numeros iguales.\n");
        return 0;
    }
    
    a=MAX(num1,num2,num3);
    printf("El numero mayor entre %d, %d y %d es:%d\n",num1,num2,num3,a);

    
    return 0; 
}