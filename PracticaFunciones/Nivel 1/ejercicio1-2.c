/*Reciba una temperatura expresada en grados Celsius y conviértala en Farenheit mediante una función.
 Crear además la función que realice la acción inversa.*/

 #include <stdio.h>
 #include <stdlib.h>

void celsiusAfarenheit (float);
void farenheitAcelsius (float);

int main()
{
    float temperatura;

    printf("Ingrese una temperatura: ");
    scanf("%f", &temperatura);

    printf("Celsius a farenheit:\n");
    celsiusAfarenheit(temperatura);

    printf("Farenheit a celsius:\n");
    farenheitAcelsius(temperatura);

    return EXIT_SUCCESS;
    
}

void celsiusAfarenheit (float temperatura1)
{
    int farenheit;

    farenheit = temperatura1 * 1.8 + 32;

    printf("El resultado de pasar la temperatura en %f° celsius a farenheit es %d°.\n",temperatura1,farenheit);
}

void farenheitAcelsius (float temperatura2)
{
    int celsius;

    celsius = (temperatura2 - 32) / 1.8;

    printf("El resultado de pasar %f° farenheit a celsius es %d°.\n",temperatura2,celsius);
}