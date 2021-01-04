/*Crear una estructura de datos que almacene nro. de telefono, nombre y edad.
utilizar la estructura en una agenda telefonica con un vector dimensionado por el usuario.
al final impriumir todos los contactos.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct{
	int cod,edad;
	char nom[20];
}estructura;

main(){
	printf("\n\t\tESTRUCTURA DE DATOS\n\n");
	int n,i;
	printf("Dimension del arreglo");
	do{
		scanf("%d",&n);
	}while(n<=0);
	
	estructura a[n];
	
	for(i=0;i<n;i++){
		system("cls");
		printf("\n\nDIGITE LOS DATOS A CARGAR AL ARREGLO\n");
		printf("Codigo,posicion %d: ",i+1);
		scanf("%d",&a[i].cod);
		printf("\nNombre: ");
		scanf("%s",&a[i].nom);
		printf("\nEdad: ");
		scanf("%d",&a[i].edad);
	}
	
	system("cls");
	
	printf("\nElementos del arreglo\n");
	printf("Codigo					Nombre		Edad\n");
	for(i=0;i<n;i++){
		printf("\n%-10d%20s%6d",a[i].cod,a[i].nom,a[i].edad);
	}

}

