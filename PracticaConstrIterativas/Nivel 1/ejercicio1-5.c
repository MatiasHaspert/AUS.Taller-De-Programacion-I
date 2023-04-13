/*Pida dos números y multiplique todos los números comprendidos entre el primero y el segundo (inclusive).
Debe controlarse que el segundo número sea mayor que el primero*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero1, numero2;
    int multiplicacion = 1;
    
    
    printf("Ingrese dos numeros enteros: \n");
    printf("Ingrese el primer numero: \n");
    printf("-> ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: \n");
    printf("-> ");
    scanf("%d", &numero2);
    
    if (numero1 > numero2)
    {
        printf("El segundo numero deberia ser el mayor.\n");
        printf("Ingrese el segundo numero de nuevo: \n");
        printf("-> ");
        scanf("%d", &numero2);
    }

    for(int i = numero1; i <= numero2; i++)
    {
      multiplicacion = multiplicacion * i;
    }

    printf("La multiplicación de los numeros entre %d y %d es: %d\n", numero1, numero2,multiplicacion);

    return 0;
}