/*Problemas de utilizar scanf para ingresar cadenas de caracteres por teclado:
-Falta de control para la cantidad de caracteres que se ingresan
-Problemas al ingresar cadenas con espacios

FGETS podemos leer una cadena del buffer de entrada(stdin) y copiarlo a un vector de caracteres

fgets(cadena,longitud,stdin)

cadena: es el vector de caracteres donde se guarda lo que ingreso el usuario

longitud: la cantidad de caracteres que se van a copiar de stdin

stdin: es el buffer de entrada donde se obtiene la cadena

fgets agrega un \n antes del \0*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombreYapellido[30];
    char estadoCivil[30];

    printf("Ingrese su nombre y apellido: ");
    fgets(nombreYapellido,30,stdin);

    fflush(stdin); //limpiar los fgets
    
    printf("Ingrese su estado civil: ");
    fgets(estadoCivil,30,stdin);

    printf("Datos ingresados:\n");
    printf("Nombre y apellido: %s",nombreYapellido);
    printf("Estado civil: %s",estadoCivil);

    return EXIT_SUCCESS;
}