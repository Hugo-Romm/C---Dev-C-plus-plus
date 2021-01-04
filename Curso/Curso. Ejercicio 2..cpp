/*Ejercicio 2
Desarrollar un sistema que pida e introduzca por teclado el nombre del usuario,le pida su edad.
Que tambien pida e introduzca la edad de su papa.
Por ultimo salude al usuario por su nombre, y le diga cuantos anhos de diferencia tiene con su papa.*/
#include<stdio.h>
#include<stdlib.h>

main(){
	char nombre[50];
	int edad;
	int edadp;
	
	printf("\nIntroduzca su nombre: \n");
	scanf("%s",&nombre);
	
	printf("\nIngrese su edad: \n");
	scanf("%d",&edad);
	
	printf("\nIntroduce la edad de tu papa: \n");
	scanf("%",&edadp);
	
	printf("\nHola, Bienvenido %s\n",nombre);
	printf("\nLa diferencia de edad entre tu padre y tu es: %d\n",edad-edadp);
}
