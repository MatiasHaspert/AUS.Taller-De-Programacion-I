/*
Crear un programa que permita tener almacenado el precio unitario de 5 productos diferentes.
El usuario indica cuantos productos quiere comprar de cada tipo, para indicar ninguno ingresará 0, por supuesto evitar valores negativos.
Si el usuario compra más de 10 productos de un mismo tipo, se debe aplicar un 8% de descuento sobre el costo total de los productos de
ese tipo en particular.
Si el usuario supera un monto máximo (especificarlo con una macro), se le debe aplicar un descuento del 15% al costo total de toda la
compra.
Crear funciones para: almacenar el precio de los 5 productos, permitir al usuario ingresar cuantos productos de cada tipo desea adquirir.
Mostrar por pantalla los descuentos que obtuvo (si aplica alguno) y el costo total de la compra
*/

#include <stdio.h>


#define MONTO_MAXIMO 6000
#define DESCUENTO_MAX 15
#define DESCUENTO_XPRODUCTO 8
#define PRODUCTOS 5

void presentacion ();
void cartel (int );
int precioProductos (int );
void factura(int , int, int []);

int main()
{
    int i;
    int cant_productos[PRODUCTOS];
    int B[PRODUCTOS];
    int total = 0;
    int P;

    presentacion();

    for(i = 0; i < PRODUCTOS; i++)
    {
        cartel(i+1);
        printf("> ");

        do
        {
            scanf("%d",&cant_productos[i]);
            if (cant_productos[i] < 0)
            {
                printf("Por favor no ingrese un número negativo.\n");
                printf("Indique cuántos desea comprar o cero si ninguno:\n");
                printf("> ");
            }
        }while( cant_productos[i] < 0);
    }

    for(i = 0; i < PRODUCTOS; i++)
    {
        factura(cant_productos[i],i,B);
    }
    for(i = 0; i < PRODUCTOS; i++)
    {
        total += B[i];
    }

    if(total > MONTO_MAXIMO)
    {
        P = total * DESCUENTO_MAX / 100;
        total = total - P;
        printf("\nObtuviste un descuento del %d%% por superar el monto de %d.\n",DESCUENTO_MAX, MONTO_MAXIMO);
        printf("Ahorraste %d.\n",P);
    }
    
    printf("\nEl costo total de la compra es %d.\n",total);
    return 0;
}

void presentacion ()
{
    printf("\nBienvenidos:\n");
    printf("Tiene 5 productos, indique cuántos desea comprar o cero si ninguno:\n");
    printf("A continuación se los mostrará los productos por pantalla:\n");
}

void cartel (int a)
{
    printf("\nProducto %d, su precio es: %d.\n", a, precioProductos(a));
    printf("Cuantos desea comprar:\n");
}

int precioProductos (int a)
{
    int producto1 = 100, producto2 = 250, producto3 = 400;
    int producto4 = 500, producto5 = 650;

    if( a == 1)
    {
        return producto1;
    }
    else if (a == 2)
    {
        return producto2;
    }
    else if (a == 3)
    {
        return producto3;
    }
    else if (a == 4)
    {
        return producto4;
    }
    else if (a == 5)
    {
        return producto5;
    }
}

void factura(int a, int b, int X[])
{

    if(a > 10)
    {
        int D = precioProductos(b + 1) * a * DESCUENTO_XPRODUCTO / 100;
        X[b] = precioProductos(b + 1) * a - D;
        printf("\nDescuento en el producto %d de %d%%, se ahorro %d", b+1, DESCUENTO_XPRODUCTO, D);
    } 
    else
    {
        X[b] = precioProductos(b + 1) * a;
    }

}
