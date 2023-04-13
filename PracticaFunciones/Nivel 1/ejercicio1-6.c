/* Dado un entero, mediante una función determine cuantos dígitos tiene.
Nota: usar tipo unsigned long long int. */

#include <stdio.h>
#include <stdlib.h>

void digitos(unsigned long long int);

int main()
{
    unsigned long long int num;

    digitos(num);


    return EXIT_SUCCESS;
}

void digitos(unsigned long long int num)
{
    printf("Ingrese un numero: ");
    scanf("%llu",&num);

    int contador = 0;
    while (num != 0)
    {
        num /= 10;
        contador++;
    }

    printf("El numero tiene %d cifras.\n",contador);

}