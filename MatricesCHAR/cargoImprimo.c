#include <stdio.h>
#include <stdlib.h>

void cargaMatriz();
void imprimoMatriz();

int main()
{
    char matriz[2][31];

    cargaMatriz(matriz);

    imprimoMatriz(matriz);


    return EXIT_SUCCESS;
}

void cargaMatriz (char matriz[2][31])
{
    printf("Ingrese una palabra a la matriz:\n");

    for(int f = 0;  f < 2; f++)
    {
        printf("Ingrese la %d palabra: ",f+1);
        gets(matriz[f]);
    }
}

void imprimoMatriz(char matriz[2][31])
{
    printf("\nPalabras ingresadas:\n");
    
    for(int f = 0; f < 2; f++)
    {
        printf("%s\n", matriz[f]);
    }

    
}