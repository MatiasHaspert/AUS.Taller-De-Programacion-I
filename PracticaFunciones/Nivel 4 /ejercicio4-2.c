/*
Implementar el algoritmo de Euclides para determinar el MCD entre dos enteros. 
*/

#include <stdio.h>

int euclides (int, int );

int main()
{
    int num1,num2;
    int eucl;

    printf("Ingrese dos enteros y te daré al mayor número entero que los divide sin dejar residuo alguno.\n");
    printf("1)> ");
    scanf("%d",&num1);
    printf("2)> ");
    scanf("%d",&num2);

    eucl = euclides(num1,num2);
    
    printf("\nEl número es: %d.\n",eucl);
    
    return 0;
}

int euclides (int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return euclides(b,a % b);
    }
    
}