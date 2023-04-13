/*Implementar funciones que permitan pasar pesos argentinos a dólares estadounidenses y a pesos chilenos*/

#include <stdio.h>
#include <stdlib.h>

void pesosArgAdolar (float);
void pesosArgAchilenos(float);

int main()
{   
    int opcionSeleccionada;
    float pesosArg;

    do
    {
        menu();
        
        printf("\nIngrese una opcion:\n");
        printf("> ");
        scanf("%d",&opcionSeleccionada);

        switch (opcionSeleccionada)
        {
        case 1:
            printf("Ingrese los pesos argentinos:\n");
            printf("> ");
            scanf("%f",&pesosArg);
            pesosArgAdolar(pesosArg);
            break;
        
        case 2:
            printf("Ingrese los pesos argentinos:\n");
            printf("> ");
            scanf("%f",&pesosArg);
            pesosArgAchilenos(pesosArg);
            break;
        }

    }while(opcionSeleccionada != 0);
    

    return 0;
}

void menu()
{
    printf(">>>PESOS ARGENTINOS A DOLARES Y PESOS CHILENOS<<<.\n");
    printf("1- Pesos argetinos a dolares:\n");
    printf("2- Pesos argentinos a pesos chilenos:\n");
    printf("0- Salir");
}

void pesosArgAdolar (float pesos)
{   
    float dolares;

    dolares = pesos * 0.0054;  
    printf("El valor de $%f pesos argentinos a dolares es $%f.\n",pesos,dolares);
}

void pesosArgAchilenos(float pesos2)
{
    float chilenos;

    chilenos = pesos2 * 4.41;

    printf("El valor de $%f pesos argentinos a pesos chilenos es $%f.\n",pesos2,chilenos);

}