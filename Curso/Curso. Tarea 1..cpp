/*Desarrolar un sistema que permita ingresar por teclado el anho de nacimiento del usuario,
calcule la edad actual y la imprima por pantalla.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int edad;
	int nacimiento;
	int anho;
	
	printf("\n\n\n\t\t\tCalculadora de edad\n\n\n\t\t\t");
	
	printf("\t\nIngrese su a%co de nacimiento: ",164);
	scanf("%d",&nacimiento);
	
	printf("\t\nIngrese el a%co en el que estamos: ",164);
	scanf("%d",&anho);
	
	printf("\n\tSu edad actual es de: %d a%cos\n\t",edad=anho-nacimiento,164);
}
