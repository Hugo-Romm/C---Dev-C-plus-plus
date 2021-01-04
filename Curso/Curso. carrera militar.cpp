#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct{
	char nombre[20];
	int edad;
	int sexo;
}estructura;

main(){
	printf("\n\tInscripciones a la carrera Militar\n\n");
	int n,i;
	int hombre=0,mujer=0;
	printf("Dimension del Vector");
	do{
		scanf("%d",&n);
	}while(n<=0);
		
		estructura a[n];
		
		for(i=0;i<n;i++){
			system("cls");
			printf("\n\nDigite los datos a cargar en el vector\n\n");
			printf("\nNombre ");
			scanf("%s",&a[i].nombre);
			system("cls");
			int m=0;
			
			while(m<=17){
				printf("Edad: ");
				scanf("%d",&a[i].edad);
				system("cls");
				if(a[i].edad<=17){
					printf("La edad ingresada debe ser mayor a 17. reintentar.\n\n");	
				}else{
					printf("Edad correcta\n");
					m=m+18;
				}	
			}
			
			system("cls");
			
			a[i].sexo=0;
			while(a[i].sexo<1 or a[i].sexo>2){
				printf("Sexo Hombre(1)  Mujer(2) ");
				scanf("%d",&a[i].sexo);
				if(a[i].sexo==1){
				hombre++;
				}if(a[i].sexo==2){
				mujer++;
				}
				
			}
			
			
		}
		system("cls");
		printf("\nTotal del personas que se inscribieron= %d\n",n);
		printf("\nTotal de hombres que se inscribieron= %d\n",hombre);
		printf("\nTotal de mujeres que se inscribieron= %d\n",mujer);
		printf("\nNombre		Edad		Sexo");
	for(i=0;i<n;i++){
		printf("\n%-10s%10d%15d",a[i].nombre,a[i].edad,a[i].sexo);
	}
}
