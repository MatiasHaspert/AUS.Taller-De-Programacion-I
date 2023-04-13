/*Crear un programa que permita utilizando funciones:
cargar un array A de 20 enteros con números enteros aleatorios entre 1 y 100,
mostrarlo por pantalla, calcular la suma de todas sus componentes y el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 20

void cargoYmuestro (int []);

int main()
{
    int array[N];

    cargoYmuestro(array);

    sumaYpromedio(array);

    return EXIT_SUCCESS;
}

void cargoYmuestro (int array[])
{
    int i;
    srand(getpid());

    printf("Array aleatorio:\n");

    for ( i = 0; i < N; i++)
    {
        array[i] = 1 + rand() %100;

        printf("%d - ",array[i]);   
    }
    
}

void sumaYpromedio(int array[])
{
    int i; 
    float suma = 0, promedio;

    for ( i = 0; i < N; i++)
    {
        suma = suma + array[i];
    }

    promedio = suma / N;

    printf("\nEl promedio del array aleatorio es %f.\n",promedio);
    
}