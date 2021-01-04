/*Desarrollar un sistema que permita dimensionar por teclado un vector y almacenar dentro numeros de 3 en 3,
Ejemplo:3-6-9-12... Al final imprimir por pantalla todos los numeros pares ingesados.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int vec;
	int i=0;
	int nro=3;
	printf("\n\n\t\tDimensione su Vector: ");
	scanf("%d",&vec);
	system("cls");
	printf("\n\n\t\tVector dimensionado a %d",vec);
	
	int a[vec];
	a[i]=0;
	while(i<vec){
		a[i]=nro;
		nro=nro+3;
		i++;
	}
	printf("\n\n\n\t\t\tResultados del Vector: \n\n");
	i=0;
	while(i<vec){
		printf(" %d",a[i]);
		i++;
	}
	i=0;
	printf("\n\t\t\nNumeros Pares: \n\n");
	while(i<vec){
		if(a[i]%2==0){
			printf(" %d \n",a[i]);
		}
		i++;
	}
}
