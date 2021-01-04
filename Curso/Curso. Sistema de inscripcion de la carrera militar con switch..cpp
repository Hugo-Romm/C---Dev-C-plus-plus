/*Dessarrollar un sistema para la inscripcion a la carrera militar
el usuario debera dimensionar el vector, el cual almacenara nombre, Edad, sexo, de la persona o el postulante.
solo se admitiran mayores a 17 anhos. al final se debera imprimir cuantas personas se inscribieron, cuantas
mujeres y cuantos hombres se inscribieron y la lista completa de los postulantes. Con el commando SWITCH*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct{
	char nombre[20];
	int sexo;
	int edad;
}estructura;

main(){
	int hombre=0,mujer=0;
	printf("\n\tInscripcion a la carrera militar\n\n");
	int n,i;
	printf("Dimension del vector: ");
	do{
		scanf("%d",&n);
	}while(n<=0);
	
	estructura a[n];
	
	for(i=0;i<n;i++){
		system("cls");
		printf("\n\tDigite los datos a cargar en el Vector\n\n");
		printf("Nombre: ");
		scanf("%s",&a[i].nombre);
		system("cls");
		int m=0;
		while(m<=17){
		printf("Edad: ");
		scanf("%d",&a[i].edad);
		system("cls");
		if(a[i].edad<=17){
			printf("La edad debe ser mayor a 17. reintentar \n");	
		}else{
			printf("Edad correcta \n");
			m=m+18;
		}
	}
	system("cls");
	printf("Sexo Hombre(1) Mujer(2)\n");
	scanf("%d",&a[i].sexo);
	switch(a[i].sexo){
		case 1:
			hombre++;
			break;
		case 2:
			mujer++;
			break;
		default:
			printf("Opcion invalida.");
			break;
		
	}
		
	
	}
	system("cls");
	
	printf("\nElementos del Vector\n");
	printf("\nTotal del personas que se inscribieron= %d\n\n",n);
	printf("\nTotal de mujeres que se inscribieron= %d\n\n",mujer);
	printf("\nTotal de hombres que se inscribieron= %d\n\n",hombre);
	printf("\nNombre		Edad		Sexo");
	for(i=0;i<n;i++){
		printf("\n%-10s%10d",a[i].nombre,a[i].edad);
		if(a[i].sexo==1){
			printf("\t    Hombre");
		}else if(a[i].sexo==2){
			printf("\t    Mujer");
		}
	}
}

