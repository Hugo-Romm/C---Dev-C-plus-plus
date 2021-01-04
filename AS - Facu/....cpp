#include <stdio.h>
#include <time.h>
int main(void)
{
 int y, x, i, g, temp, filas, columnas;
 
 srand (time (NULL));
 
 printf ("Introduzca el numero de filas : ");
 scanf ("%i",&filas);
 printf ("\nIntroduzca el numero de columnas : ");
 scanf  ("%i",&columnas);
 
 int matriz[filas][columnas];
 temp = filas*columnas;
 
 for(i=0; i<filas; i++)
  for(g=0; g<columnas; g++)
   matriz[i][g] = 0;
 
 for(i=1; i<=temp; i++)
 {
  do
  {
   y = rand(0) % filas;
   x = rand(0) % columnas;
  }
  while(matriz[y][x]);
  matriz[y][x] = i;
 }
 
 for(i=0; i<filas; i++)
 {
  for(g=0; g<columnas; g++)
    printf("%i\t", matriz[i][g]);
  printf("\n");
 }
 return 0;
}
