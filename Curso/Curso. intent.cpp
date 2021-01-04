/*Desarrollar un sistema que permita dimensionar por teclado un vector y almacenar dentro numeros de 3 en 3,
Ejemplo:3-6-9-12... Al final imprimir por pantalla todos los numeros pares ingesados.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int vec;
	int sum;
	int i=3;
	
	printf("\nDimensione su vector: ");
	scanf("%d",&vec);
	printf("\nVector dimensionado a: %d\n\n",vec);
	
	int a[vec];
	
	for(sum=0;sum<vec;sum++){
	printf(" %d ",a[i]);
	a[i]=a[i]+3;	
	}
	
	i=0;
	printf("\nLos numeros pares son: \n");
	while(i<vec){
		if(a[i]%2==0){
			printf(" %d ",a[i]);
	}
	i++;		
	}
		
	
	
	
}
