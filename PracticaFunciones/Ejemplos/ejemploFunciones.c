#include <stdio.h>
#include <stdlib.h>

float calcularAreaTriang(float, float);

int main()
{
    float resultado;
    printf("Despues de esta linea se ejecutara la funcion:\n");

    resultado = calcularAreaTriang(4,8);

    printf("El resultado de calcular el area del triangulo es %f!\n", resultado);

    return 0;
}

//definicion de la funcion 
float calcularAreaTriang(float base, float altura)
{
    float area;

    area = (base * altura) / 2;

    return area;
}