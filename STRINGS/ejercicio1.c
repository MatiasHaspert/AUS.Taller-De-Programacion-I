//funcion "strlen" devuelve un entero que representa la cantidad de caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[10];
    int cant_vocales = 0;
    int i = 0;
    int cant_letras;

    printf("Ingrese una palabra:");
    scanf("%s",palabra);

    while (palabra[i] != NULL)
    {
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            cant_vocales++;
            palabra[i] = 'X'; // si hay una vocal la reemplazo por una X
        }
        i++;
    }    
    cant_letras = strlen(palabra);

    printf("La canditad de vocales que tiene la palabra %s son %d.\n",palabra,cant_vocales);
    printf("La canditad de letras que tiene la palabra (%s): son %d.\n",palabra,cant_letras);
    
    return EXIT_SUCCESS;
}