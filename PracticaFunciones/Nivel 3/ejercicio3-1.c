/*Crear funciones que mediante arrays se emulen operaciones de conjuntos.
-En primer lugar existirán dos arrays A y B de 10 elementos enteros comprendidos en el rango [0. 100].
-Debe crearse una función que cargue los arrays de forma aleatoria pero que no ingrese valores repetidos en cada array, es decir debemos
controlar en esa función que cuando se propone un número aleatorio para almacenar en la posición i del array no esté dicho número en
ninguna de las posiciones 0, 1, …, i-1.
-Luego de la carga de los arrays mostrarlos por pantalla.
-Crear una función que muestre por pantalla la intersección de estos “conjuntos”, es decir los elementos de A que estén presentes en B.
-Crear una función que muestre por pantalla la unión de estos “conjuntos”, es decir los elementos pertenecientes a A y B, sin repetir.
-Crear una función que muestre por pantalla la diferencia entre estos “conjuntos”, es decir los elementos pertenecientes a A no
pertenecientes a B.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void cargoYmuestro (int [], int []);
void interseccion (int [], int []);
void uniones (int [],int []);
void diferencia (int [],int []);

int main()
{
    int A[N];
    int B[N];

    cargoYmuestro(A,B);
    
    interseccion(A,B);

    uniones (A,B); 
    
    diferencia(A,B);    
    
    return EXIT_SUCCESS;
}

void cargoYmuestro (int arrayA[],int arrayB[])
{
    srand(time(NULL));
    int i;

    // cargo el array

    printf("\nArray A:\n");
    for ( i = 0; i < N; i++)
    {
        do
        {
          arrayA[i] = 1 + rand() %100;

        }while(arrayA[i] == arrayA[i - 1]);
    }

    // muestro el array
    for ( i = 0; i < N; i++)
    {
        printf("%d ", arrayA[i]);
    }

    // cargo el array
    printf("\nArray B:\n"); 
    for ( i = 0; i < N; i++)
    {
        do
        {
          arrayB[i] = 1 + rand() %100;

        }while(arrayB[i] == arrayB[i - 1]);
    }

    // muestro el array
    for ( i = 0; i < N; i++)
    {
        printf("%d ", arrayB[i]);
    }
    
}


void interseccion (int arrayA[], int arrayB[])
{
    int i,j;
    int noRepetidos = 0;

    printf("\nValores repetidos en los arrays:\n");

    for ( i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if(arrayA[i] == arrayB[j])
            {
                printf("%d ",arrayA[i]);
            }
            else
            {
                noRepetidos++;        
            }
        }
    }

    if (noRepetidos == N)
    {
        printf("\nNo se encuentran valores repetidos!\n");
    }
    
}

void uniones (int arrayA[], int arrayB[])
{
    int i, j, k;
    int Z[N*2]; // Array para almacenar la unión
    
    for (i = 0; i < N; i++) {
        Z[i] = arrayA[i];
    }
    k = N;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (arrayB[i] == arrayA[j]) {
                break;
            }
        }
        if (j == N) {
            Z[k++] = arrayB[i];
        }
    }

    printf("\nUnión de conjuntos:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%d ",Z[i]);
    }
    
}

void diferencia (int arrayA[], int arrayB[])
{

    printf("\nElementos en A que no están en B: \n");
    for (int i = 0; i < N; i++) {
        int encontrado = 0;
        for (int j = 0; j < N; j++) {
            if (arrayA[i] == arrayB[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf("%d ", arrayA[i]);
        }
    }
    printf("\n");

}