#include <stdio.h>

int main()
{
    float a,b,c;

    printf("Ingrese el valor de un lado:\n");
    scanf("%f",&a);
    printf("Ingrese el valor de un lado:\n");
    scanf("%f",&b);
    printf("Ingrese el valor de un lado:\n");
    scanf("%f",&c);

    if(a + b > c && b + c > a && a + c > b)
    {
        printf("Los lados forman un triangulo\n");

        if(a==b && b ==c)
        {
            printf("Los lados forman un triangulo equilatero\n");
        }
        else if(a==b || b==c || a==c)
        {
            printf("Los lados forman un triangulo isosceles");
        }
        else
        {
            printf("Los lados forman un triangulo escaleno");
        }
    }
    else
    {
        printf("Los lados no forman un triangulo\n");
    }

    return 0; 
}