/*Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
 - cuantos elementos son positivos y pares
 - cuantos elementos son positivos e impares
 - cuantos elementos son negativos y pares
 - cuantos elementos son negativos e impares*/

 #include <stdio.h>

int main()
{
    int array[10];
    int i;
    int positivos_pares = 0, positivos_impares = 0, negativos_impares = 0, negativos_pares = 0;

    printf("Ingrese diez numeros enteros:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Ingrese un número:  ");
        scanf("%d", &array[i]);
    }

    for( i = 0; i < 10; i++)
    {
        if( array[i] >= 0 && array[i] % 2 == 0)
        {
            positivos_pares++;
        }
        else if( array[i] >= 0 && array[i] % 2 == 1)
        {
            positivos_impares++;
        }
        else if( array[i] < 0 && array[i] % 2 == 0)
        {
            negativos_pares++;
        }    
        else if(array[i] < 0 && array[i] % 2 == 1)
        {
            negativos_impares++;
        }
        
    }

    printf("Cantidad de positivos y pares: %d\n", positivos_pares);
    printf("Cantidad de positivos y impares: %d\n", positivos_impares);
    printf("Cantidad de negativos y pares: %d\n", negativos_pares);
    printf("Cantidad de negativos y impares: %d\n", negativos_impares);

    return 0;       
}