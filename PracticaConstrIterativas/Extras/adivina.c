#include <stdio.h>
#define RANGO 1000
#define MAXINTENTOS 10


int main() {
   int secreto=0;
   int intento=0;
   int cant_intentos=0;
   int izq=1, der=RANGO;
   char resp;

   printf("Ingrese un numero secreto entre 1 y %d yo no voy a mirar...\n", RANGO);
   do {
      printf("> ");
      scanf("%d", &secreto);
      if (secreto < 1 || secreto > RANGO) { 
	      printf("No me haga trampa!!!\n");
      }
   } while(secreto < 1 || secreto > RANGO);

   do {   
      printf("Bien haré un intento: ");
      intento = (izq+der)/2;

      printf("Es el numero %d?\n", intento);
      cant_intentos++;
      
      printf("\nDiga 'A' si es mas Alto y 'B' si es mas Bajo por favor.. sino 'O' para decir OK.\n");
      scanf(" %c", &resp);

      if(resp=='A') {
	  izq=intento;     
      } else if (resp=='B') {
          der=intento;
      } else {
	  printf("Vamos!! adivine!!! ;)\n");
      }
   } while (intento != secreto && cant_intentos<MAXINTENTOS);
   
   if (intento != secreto) {
      printf("He sido vencida por un humano!!!\n");
   }
   
   return 0;
}