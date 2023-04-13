/*Dada una nota numerica ingresada por el usuario, mostrar por pantala APROBO 
si la nota es mayor o igual que 4 si no DESAPROBO y 7 PROMOCIONO*/

#include <stdio.h>

int main()
{
    float nota;

    printf("Ingrese su nota:\n");
    scanf("%f", &nota);

    if(nota >=7)
    {
        printf("PROMOCIONO");
    }
    else if(nota >=4)
    {
        printf("APROBO");
    }
    else
    {
        printf("DESAPROBO");
    }

    return 0;
}