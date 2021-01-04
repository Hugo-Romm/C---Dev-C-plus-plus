/*Crear una estructura de datos que contenga el CI, nombre y edad de los empleados de una empresa,
por medio de un vector dimensionado por el usuario, al final imprimir los empleados mayores a 30 anhos.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct{
	char nombre[20];
	int edad;
	int ci;
}estructura;

int main(){
	int n,i;
	printf("\n\n\n\t\t\tEMPLEADOS DE LA EMPRESA\n\n\n");
	printf("Dimensione el vector: ");
	do{
		scanf("%d",&n);
	}while(n<=0);
	
	estructura a[n];
	
	for(i=0;i<n;i++){
		system("cls");
		printf("\n\tDigite los datos a cargar en el vector\n\n");
		printf("Nombre: ");
		scanf("%s",&a[i].nombre);
		printf("Edad: ");
		scanf("%d",&a[i].edad);
		printf("Cedula de Identidad: ");
		scanf("%d",&a[i].ci);
		system("cls");
	}
	
	printf("\n\n\n\t\t\tRESULTADOS DEL VECTOR\n\n\n\t\t\t");
	printf("\nNombre		Edad			Cedula de indentidad");
	
	printf("\n\n\nMayores a 30 A%cos: ",164);
	for(i=0;i<n;i++){
		if(a[i].edad>=30){
			printf("\n%-10s%10d%30d",a[i].nombre,a[i].edad,a[i].ci);
		}
	}	
}
