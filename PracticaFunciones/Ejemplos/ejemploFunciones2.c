#include <stdio.h>
#include <stdlib.h>

int calculaCostoEnvio(int);


int main()
{   
    int distanciaKm;
    int precioProducto;
    int precioFinal;
    int costoEnvio;

    printf("Ingrese el costo del producto: ");
    scanf("%d", &precioProducto);

    printf("Ingrese la distancia de su domicilio: ");
    scanf("%d",&distanciaKm);

    costoEnvio = calculaCostoEnvio(distanciaKm);
    
    if (costoEnvio == -1)
    {
       printf("No se realizan envíos a más de 100km.\n");
       printf("El costo del producto es %d.\n", precioProducto);
    }
    else
    {
        precioFinal = precioProducto + costoEnvio;

        printf("El precio del producto con envío es %d.\n", precioFinal);
    }
    return 0;
}

int calculaCostoEnvio (int distanciaKm)
{
    int costoDeEnvio;
    if(distanciaKm < 10)
    {
        printf("El envío es gratis.\n");
        costoDeEnvio = 0;
    }
    else
    {
        if(distanciaKm > 100)
        {
            costoDeEnvio = -1;
        }
        else
        {
            costoDeEnvio = 100 + (10 * distanciaKm);
            printf("El costo de envío es %d.\n",costoDeEnvio);
        }
    }

    return costoDeEnvio;
}

