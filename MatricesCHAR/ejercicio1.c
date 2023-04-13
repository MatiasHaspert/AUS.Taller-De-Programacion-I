#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargoNombres();
void imprimoNombres();
void ingresoNombreYverifico();

int main()
{
    char nombres[5][31];
    
    cargoNombres(nombres);

    imprimoNombres(nombres);

    ingresoNombreYverifico(nombres);
    
    return EXIT_SUCCESS;
}

void cargoNombres (char nombres[5][31])
{
    printf("Ingrese los nombres:\n");

    for(int f = 0; f < 5; f++)
    {
        printf("> ");
        gets(nombres[f]);
    }
}

void imprimoNombres (char nombres[5][31])
{
    printf("\nNombres ingresados:\n");

    for(int f = 0; f < 5; f++)
    {
        printf(">%s\n",nombres[f]);
    }
}

void ingresoNombreYverifico(char nombres[5][31])
{
    int f;
    char nombre2[31];
    int existe = 0;

    printf("\nIngrese otro nombre y te dire si se encuentra en el vector:");
    gets(nombre2);

    for (f = 0; f < 5; f++)
    {
        if(strcmp(nombre2,nombres[f]) == 0)
        {
            existe = 1;
        }    
    }   

    if (existe == 1)
    {
        printf("Este nombre se encuentra en el vector!!\n");
    }
    else
    {
        printf("Este nombre no se encuentra en el vector!!\n");
    
    }
    
}