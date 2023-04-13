#include <stdio.h>

/*int main()
{
    int numero;
    int acumulador = 0;

    printf("Ingrese un monto:\n");
    scanf("%d",&numero);

    acumulador = acumulador + numero;

    printf("Ingrese otro monto:\n");
    scanf("%d",&numero);

    acumulador += numero;

    printf("Ingrese un monto:\n");
    scanf("%d",&numero);

    acumulador += numero;

    printf("El monto total es: %d\n", acumulador);

    return 0;
}*/

int main()
{
    float numero;
    int contador = 0;

    printf("Ingrese una temperatura:\n");
    scanf("%f", &numero);

    contador++;

    printf("Ingrese otra temperatura:\n");
    scanf("%f", &numero);

    contador++;

    printf("Se ingresaron %d temperaturas", contador);

    return 0;
}
