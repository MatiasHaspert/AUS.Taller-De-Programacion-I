/*funcion strcpy se utiliza para copiar la cadena str_origen en str_destino,
se copian todos los caracteres hasta el \0

ejemplo:
            strcpy(str_destino,str_origen)
            strcpy(str_destino,"software")
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[10];

    printf("Ingrese una palabra a string1: ");
    scanf("%s",string1);

    int longitud = strlen(string1);

    if(longitud < 10)
    {
        strcpy(string2,string1);

        printf("La palabra almacenada en string1 es %s.\n",string1);
        printf("La palabra copiada de string1 a string2 es %s.\n",string2);
    }
    else
    {
        printf("No se pudo copiar string1 a string2.\n");
    }
    
    return EXIT_SUCCESS;
}