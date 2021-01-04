/*Desarrollar un sistema que permita dimensionar por teclado un vector y almacenar dentro numeros de 3 en 3,
Ejemplo:3-6-9-12... Al final imprimir por pantalla todos los numeros pares ingesados.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int i;
	int n;
	
	printf("\nDimensione su vector: ");
	scanf("%d",&n);
	
	printf("\n Vector dimensionado a %d",n);
	
	int a[n];
	
	for(i=0;i<n;i+3){
		printf("\n%d",a[i]);
	}
	
}
