#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargar(char nombres[5][41])
{
    int f;
    for(f=0;f<5;f++)
    {
        printf("Ingrese el nombre de persona:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    printf("Listado completo de nombres\n");
    for(f=0;f<5;f++)
    {
        printf(">%s\n",nombres[f]);
    }
}

void ordenar(char nombres[5][41])
{
    int k,f;
    char aux[41];
    for (k = 0; k < 5 - 1; k++)
    {
        for (f = 0; f < 4 - k; f++)
        {
            if (strcmp(nombres[f],nombres[f+1]) > 0)
            {
                strcpy(aux,nombres[f]);
                strcpy(nombres[f],nombres[f + 1]);
                strcpy(nombres[f + 1],aux);
            }
        }
    }
}


int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    ordenar(nombres);
    imprimir(nombres);
    
    return 0;
}