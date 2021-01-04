/*Desarrolar un sistema que permita ingresar por teclado el anho de nacimiento del usuario,
calcule la edad actual y la imprima por pantalla.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int nacimiento;
	int ano;
	
	printf("\n\tIngrese su a%co de nacimiento: ",164);
	scanf("%d",&nacimiento);
	
	printf("\n\tIngrese e a%co actual en el que estamos: ",164);
	scanf("%d",&ano);
	
	printf("\n\tSu edad actual es: %d",ano-nacimiento);
}
