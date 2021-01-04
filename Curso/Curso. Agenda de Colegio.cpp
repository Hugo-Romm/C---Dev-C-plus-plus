/*codigo, nombre, edad, curso,*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct{
	int codigo;
	char nombre[50];
	int edad;
	char curso[50];
}estructura;

main(){
	printf("\n\t\tEstructura de Datos\n\n");
	int n,i;
	printf("Dimensione el Vector: ");
	do{
		scanf("%d",&n);
	}while(n<=0);
	
	estructura a[n];
	
	for(i=0;i<n;i++){
		system("cls");
		printf("\n\nDigite los Datos a cargar al Vector: \n\n");
		printf("\nCodigo: ");
		scanf("%d",&a[i].codigo);
		printf("\nNombre: ");
		scanf("%s",&a[i].nombre);
		printf("\nEdad: ");
		scanf("%d",&a[i].edad);
		printf("\nCurso: ");
		scanf("%s",&a[i].curso);
	}
	
	system("cls");
	
	printf("\nElementos de Vector\n");
	printf("Codigo			Nombre		Edad		Curso\n");
	for(i=0;i<n;i++){
		printf("\n%-10d%20s%15d%17s",a[i].codigo,a[i].nombre,a[i].edad,a[i].curso);
	}
}
