#include <stdio.h>
#include <stdlib.h>

int main()
{
// declaro las variables
int numero1;
int numero2;
int resultado;

    // le pido al usuario que ingrese dos numeros
    printf("Ingrese un numero:");
    scanf("%d", &numero1);
    printf("Ingrese un numero:");
    scanf("%d", &numero2);
    // hago la suma
    resultado = numero1 + numero2;

    printf("El resultado de sumar %d y %d es: %d\n",numero1,numero2,resultado);
    // hago la resta
    resultado = numero1 - numero2;

    printf("El resultado de restar %d y %d es: %d\n",numero1,numero2,resultado);
    //hago la multiplicacion
    resultado = numero1 * numero2;

    printf("El resultado de multiplicar %d y %d es: %d\n",numero1,numero2,resultado);
    // hago la division
    resultado = numero1 / numero2;

    printf("El resultado de dividir %d y %d es: %d",numero1,numero2,resultado);
    
    return 0;
    
}