/*
Crear un programa que permita emular el lanzamiento de un dado.
- El programa debe permitir al usuario “apostar” a un número n entre 1 y 6 (validar rango) e indicar cuantas veces desea lanzar el dado
(mínimo 5 veces, máximo 30 veces, validarlo). Cada “lanzamiento” es un número aleatorio en [1, 6].
- Al finalizar con los “lanzamientos”, se debe mostrar la cantidad de apariciones de cada número.
- Si el número que indicó es el que más veces apareció recibirá el mensaje de “excelente”, si su número elegido fue el segundo en
 orden de apariciones el mensaje será “muy bueno” y luego los mensajes serán “bueno”, “regular”, “malo” y “muy malo”,
 dependiendo de la cantidad de ocurrencias del número que arriesgó respecto a los otros números.
 Ejemplo: elige el número 2 y 20 lanzamientos
 lanzamientos: 1, 4, 2, 6, 6, 5, 3, 1, 3, 2, 5, 5, 4, 1, 3, 5, 6, 2, 5, 2
 apariciones de 1: 3
 apariciones de 2: 4    Tips: puede usar un array para almacenar los resultados
 apariciones de 3: 2    [ 3, 4, 2, 1, 5, 3] donde la posición i-ésima del array
 apariciones de 4: 2    corresponde a las apariciones del número i+1
 apariciones de 5: 5    También puede ser útil contar con un array
 aparciones de 6: 3     [“muy malo”, “malo”, “regular”, “bueno”, “muy bueno”, “excelente”]
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 6

void presentacion ();
void cargaYlanzamientos (int , int, int, int [], int []);
int estadisticas (int , int [], int);

int main()
{
    int a,b,i;
    int A = 0;
    int lanzamientos[30];
    int cantidades[N] = {0}; // en cant[0] se guarda el 1... cant[5] se guarda el 6
    char r[][30] = {"muy malo", "malo", "regular", "bueno", "muy bueno", "excelente"};
    
    presentacion();

    cargaYlanzamientos(a,b,i,lanzamientos,cantidades);

    A = estadisticas(a,cantidades,i);

    printf("El resultado es:  %s.\n",r[A]);

    return 0;
}

void presentacion ()
{
    printf("\nBienvenido a [Lanzamiento de un dado].\n");
    printf("Elija un número entre 1 y 6.\n");
    printf("Indique cuantas veces desea lanzar el dado (mínimo 5 veces, máximo 30 veces\n");
}

void cargaYlanzamientos (int a,int b, int i, int lanzamientos[], int cantidades[])
{

    do
    {
        printf("\nApueste a un número:\n");
        printf("> ");
        scanf("%d",&a);

        if(a < 1 || a > N)
        {
            printf("Ingrese un número entre 1 y 6:");
        }
        
    }while( a < 1 || a > N);

    do
    {
        printf("Indique la cantidad de veces que desee lanzar el dado:\n");
        printf("> ");
        scanf("%d",&b);

        if(b < 5 || b > 30)
        {
            printf("Se puede lanzar el dado entre 5 y 30 veces:\n");
            printf("> ");
        }

    }while(b < 5 || b > 30);

    //lanzamientos al azar
    srand(getpid());

    printf("[ ");
    for(i = 0; i <= b; i++)
    {
        lanzamientos[i] = 1 + rand()  %6;
        printf("%d ", lanzamientos[i]);
        cantidades[lanzamientos[i] - 1]++;
    }
    printf(" ]\n\n");
}

int estadisticas (int a, int cantidades[], int i)
{
    int contador = 0;

    printf("\nApariciones:\n");
    for(i = 0; i < N; i++)
    {
        printf("El número %d aparecio %d veces.\n\n", i+1, cantidades[i]);
    }

    for(i = 0; i < N; i++)
    {
        if((cantidades[i] <= cantidades[ a - 1]) && (cantidades[i] != cantidades[a - 1]))
        {
            contador++;
        }
    }

    return contador;
      
}