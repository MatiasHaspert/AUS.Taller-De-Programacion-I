/*STRCMP realiza una comparacion caracter a caracter de 2 strings (cadena1,cadena2)
Los resultados que devuelve la funcion son:

0 si las cadenas son iguales.
numero positivo: si la cadena1 es mayor a la cadena2.
numero negativo: si la cadena2 es mayor a la cadena1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra1[20];
    char palabra2[20];

    printf("Ingrese la primera palabra:");
    scanf("%s",palabra1);

    printf("Ingrese la segunda palabra:");
    scanf("%s",palabra2);

    if(strcmp(palabra1,palabra2) == 0)
    {
        printf("Las palabras son iguales!\n");
    }
    else
    {
        printf("Las palabras son distintas.\n");
    }
    
    /*else if(strcmp(palabra1,palabra2) > 0)
    {
        printf("La palabra %s es mayor alfabeticamente.\n",palabra1);
    }
    else
    {
        printf("La palabra %s es mayor alfabeticamente.\n",palabra2);
    }
    */
    return EXIT_SUCCESS;
}