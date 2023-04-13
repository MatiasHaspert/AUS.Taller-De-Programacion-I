/*
Crear las siguientes funciones recursivas
suma(a, b) = a + b
prod(a, b) = a * b
exp(a, b) = ab
factorial(n) = n!
fib(n) = n-ésimo término de la sucesión de Fibonacci (1, 2, 3, 5, 8, 13, 21, 35, 55,...)
*/

#include <stdio.h>

int suma (int, int);
void prod(int , int , int );
void exponente(int , int , int );
int factorial (int );
int fibonacci (int );

int main()
{
    int a,b;
    int sum;
    int fact, fact2;
    int fib,fib2 = 0;

    printf("Ingrese dos enteros y te daré su suma:\n");
    printf("1)> ");
    scanf("%d",&a);
    printf("2)> ");
    scanf("%d",&b);

    sum = suma(a,b);

    printf("Suma recursiva: %d.\n",sum);

    int c = a;
    prod(a, b, c);
    exponente(a, b, c);

    printf("Ingresa un número y te daré su factorial:\n");
    printf("> ");
    scanf("%d",&fact);

    fact2 = factorial(fact);

    printf("El factorial de %d es %d.\n",fact,fact2);

    printf("Ingrese un numero y te daré la sucesion fibonacci:\n");
    printf("> ");
    scanf("%d",&fib);

    fib2 = fibonacci(fib);
    printf("La sucesion fibonacci de %d es %d\n",fib,fib2);

    return 0;
}

int suma(int a, int b)
{

    if (a == 0)
    {
        return b;
        
    }
    else if ( b == 0)
    {
        return a;
    }
    else
    {
    
        return 1 + suma(a,(b - 1));
    }

}

void prod(int a, int b, int c)
{
    if (b == 1)
    {
        printf("producto recursivo: %d\n", a);
    }
    else
    {
        prod(a + c, b - 1, c);
    }
}

void exponente(int a, int b, int c)
{
    if (b == 0)
    {
        printf("exponente recursivo: %d\n", a);
    }
    else
    {
        exponente(a * c, b - 1, c);
    }
}

int factorial (int a)
{
    if(a <= 1)
    {
        return 1;
    }
    else
    {
        return a * factorial ( a - 1);
    }
}

int fibonacci (int a)
{
    if(a <= 1)
    {
        return a;
    }
    else
    {
        return fibonacci(a - 1) + fibonacci ( a - 2);
    }
}