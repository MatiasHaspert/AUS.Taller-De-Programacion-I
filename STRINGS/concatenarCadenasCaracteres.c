/*funcion strcat se utiliza para concatenar la cadena str_origen con str_destino,
la cadena resultante se almacena en str_destino

ejemplo:
            strcat(str_destino,str_origen)
            strcat(str_destino,"texto")
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char apellido[10];

    printf("Ingrese su nombre: ");
    scanf("%s",nombre);

    printf("Ingrese su apellido: ");
    scanf("%s",apellido);

    int longitudNombre = strlen(nombre);
    int longitudApellido = strlen(apellido);

    if(longitudNombre + longitudApellido < 19)
    {
        strcat(nombre," ");
        strcat(nombre,apellido);

        printf("\n%s ",nombre);
    }
    else
    {
        printf("No se pudo concatenar los strings.\n");
    }
    
    return EXIT_SUCCESS;
}