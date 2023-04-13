/*Calcule la suma de los cuadrados de los 100 primeros números enteros*/

#include <stdio.h>

int main()
{
    int suma = 0;

    for(int i = 1 ; i <= 100; i++)
    {
        suma = suma + (i * i); 
    }

    printf("La suma de los cuadrados de los primeros 100 números es: %d\n", suma);

    return 0;

}