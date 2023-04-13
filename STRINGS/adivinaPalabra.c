#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* DEFINICION DE CONSTANTES */

#define cant_intentos 3     // MAXIMO DE INTENTOS 
#define cant_caracteres 15  // MAXIMO DE CARACTERES DE UNA PALABRA
#define puntos 10           // PUNTAJES 

/*      PROTOTIPOS DE FUNCIONES  */

void menuPresentacion();
void pistas (char [],int);
void adivina(char [],char [],char [],int );

/*      PROGRAMA PRINCIPAL     */
int main()
{
    char palabraAdivinar[] = "universidad";      // variable que guarda la palabra a adivinar.
    char palabraModificada[cant_caracteres]; //variable que muestra las letras que dan las pistas.
    char palabraAingresar[cant_caracteres];  // variable que guarda la palabra que ingresa el usuario.

    // COPIO LA PALABRA A ADIVINAR EN palabraModificada
    strcpy(palabraModificada,palabraAdivinar);

    // CUENTO LAS LETRAS QUE TIENE LA PALABRA A ADIVINAR
    int longitud = strlen(palabraAdivinar);

    menuPresentacion();

    pistas(palabraModificada,longitud);

    adivina(palabraAdivinar,palabraAingresar,palabraModificada,longitud);


    return EXIT_SUCCESS;
}

void menuPresentacion()
{
    printf("\n>>ADIVINA LA PALABRA<<\n");
    printf("Tienes 3 intentos..\n");
    printf("Que comienze el juego..\n");
}

void pistas (char palabraModificada[cant_caracteres],int longitud)
{
    int i;

    //pistas para palabras de hasta 5 letras
    if(longitud < 5)
    {
        for(i = 1; i < longitud; i++ )
        {
            palabraModificada[i] = "-"; 
        }
    }
    else if(longitud >= 6 && longitud  <=8) //pistas para palabras entre 6 y 8 letras
    {
        for(i = 1; i < longitud - 1;i++)
        {
            palabraModificada[i] = '-';
        }
    }
    else if(longitud > 8) //pistas para palabras mayor a 8 letras
    {
        for(i = 1; i < longitud - 1;i++)
        {
            if(palabraModificada[i] != 'a'
            && palabraModificada[i] != 'e'
            && palabraModificada[i] != 'i'
            && palabraModificada[i] != 'o'
            && palabraModificada[i] != 'u')
            {
                palabraModificada[i] = '-';
            }
        }
    }

    printf("\nLa palabra contiene las siguientes letras:\n");
    printf("%s\n",palabraModificada);
}

void adivina(char palabraAadivinar[],char palabraIngresada[cant_caracteres],char palabraModificada[cant_caracteres],int longitud)
{
    int cant_palabrasIngresadas = 0;
    int puntajes = puntos;
    int adivino = 0;
    do
    {
        // PIDO AL USUARIO QUE INGRESE UNA PALABRA
        printf("\nTrate de adivinar ingresando una palabra: ");
        printf("> ");
        scanf("%s",palabraIngresada);
        cant_palabrasIngresadas++; // CUENTO LAS PALABRAS QUE VA INGRESANDO

        if(strcmp(palabraIngresada,palabraAadivinar) == 0) //COMPARO LAS PALABRAS
        {
            adivino = 1;
            printf("Palabra correcta!\n");
            printf("La palabra era %s.\n",palabraAadivinar);
            printf("Puntaje: %d puntos.\n",puntajes);
            printf("FIN DEL JUEGO\n");

            break;
        }
        else
        {
            int i = 0;

            printf("\nPalabra incorrecta!\n");
            puntajes = puntajes - 3;

            while(palabraModificada[i] != '-' && i < longitud) //falla un intenTo y se le da una nueva pista mostrando una letra más.                                                           
            {                                                   
                i++;
            }
            
            palabraModificada[i] = palabraAadivinar[i];

            printf("\nLa palabra contiene las siguientes letras:\n");
            printf("%s\n",palabraModificada);
        }

    }while(cant_palabrasIngresadas < cant_intentos);

    if(adivino != 1)
    {
        printf("\nSe agotaron los intentos.\n");
        printf("La palabra era %s.\n",palabraAadivinar);
        printf("\n>>FIN DEL JUEGO<<\n");
    }
}