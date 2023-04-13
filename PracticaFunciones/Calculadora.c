#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//PROTOTIPOS FUNCIONES
void menuCalculadora();
void OpcionSeleccionada(int);

//PROGRAMA PRINCIPAL
int main()
{
    int opcionSeleccionada;
    int numero1, numero2;

    do
    {
        menuCalculadora();

        printf("Ingrese una opcion:\n");
        printf("> ");
        scanf("%d", &opcionSeleccionada);

    
        OpcionSeleccionada(opcionSeleccionada);

    }while(opcionSeleccionada != 0);
    
    return 0;
}

void menuCalculadora()
{
    printf("\n>>>Calculadora<<<\n");
    printf("Opciones:\n");
    printf("1-SUMA\n");
    printf("2-RESTA\n");
    printf("3-MULTIPLICACIÓN\n");
    printf("4-DIVISIÓN\n");
    printf("5-RAÍZ CUADRADA\n");
    printf("6-POTENCIA\n");
    printf("0-SALIR\n");
}

void OpcionSeleccionada(int opcionSeleccionada)
{   
    float resultado;
    float numero1, numero2;
    switch(opcionSeleccionada)
    {
    case 0:
        break;
    case 1:
        printf("\n\n--SUMA--\n\n");
        printf("Ingrese el primer número:\n");
        scanf("%f",&numero1);
        printf("Ingrese el segundo número:\n");
        scanf("%f",&numero2);

        resultado = numero1 + numero2;

        printf("El resultado es:%f\n",resultado);
        break;
    
    case 2:
        printf("\n\n--RESTA--\n\n");
        printf("Ingrese el primer número:\n");
        scanf("%f",&numero1);
        printf("Ingrese el segundo número:\n");
        scanf("%f",&numero2);

        resultado = numero1 - numero2;

        printf("El resultado es:%f\n",resultado);
        break;
    
    case 3:
        printf("\n\n--MULTIPLICACIÓN--\n\n");
        printf("Ingrese el primer número:\n");
        scanf("%f",&numero1);
        printf("Ingrese el segundo número:\n");
        scanf("%f",&numero2);

        resultado = numero1 * numero2;

        printf("El resultado es:%f\n",resultado);
        break;
    
    case 4:
        printf("\n\n--DIVISIÓN--\n\n");
        printf("Ingrese el primer número:\n");
        scanf("%f",&numero1);
        printf("Ingrese el segundo número:\n");
        scanf("%f",&numero2);

        if(numero2 != 0)
        {
            resultado = numero1 / numero2;
            printf("El resultado es:%f\n",resultado);
        }
        else
        {
            printf("No se puede dividir por cero\n");
        }  
        break;
    
    /*case 5:
        printf("\n\n--RAÍZ CUADRADA--\n\n");
        printf("Ingrese un número:\n");
        scanf("%f",&numero1);

        if(numero1 >= 0)
        {
            resultado = sqrt(numero1);
            printf("El resultado es:%f\n",resultado);
        }
        else
        {
            printf("No se puede realizar la raiz cuadrada de numeros negativos\n");
        }
        break;
    
    case 6:
        printf("\n\n--POTENCIA--\n\n");
        printf("Ingrese la base:\n");
        scanf("%f",&numero1);
        printf("Ingrese el exponente:\n");
        scanf("%f",&numero2);

        resultado = pow(numero1,numero2);
        printf("El resultado es: %f", resultado);

        break;*/
    }
}