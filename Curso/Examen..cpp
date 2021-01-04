/*DESARROLLAR UN SISTEMA QUE PERMITA INGRESAR POR TECLADO EL NOMBRE, EDAD, Y SEXO DE LOS EMPLEADOS DE UNA EMPRESA
LOS MISMOS DEBEN ESTAR ALMACENADOS EN UNA ESTRUCTIRA DE DATOS, AL FINAL IMPRIMIR LA CANTIDAD DE MUJERES EN LA EMPRESA
Y EL PROMEDIO DE EDAD DE LOS HOMBRE*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct{
	char nombre[30];
	int edad;
	int sexo;
}estructura;

int main(){	
	int hombre=0,mujer=0,sumaedad=0;
	printf("\n\n\t\tEMPLEADOS DE LA EMPRESA\n\n\n\n");
	int n,i;
	printf("Dimensione el vector: ");
	scanf("%d",&n);
	estructura a[n];
	
	for(i=0;i<n;i++){
		system("cls");
		printf("\n\n\t\tDIGITE LOS DATOS A CARGAR EN EL VECTOR\n\n\t\t");
		printf("\nNombre: ");
		scanf("%s",a[i].nombre);
		
		printf("\nEdad: ");
		scanf("%d",&a[i].edad);
		
		printf("\nSexo: ");
		printf("\nHombre(1) Mujer(2):   ");
		scanf("%d",&a[i].sexo);
		
		
		switch(a[i].sexo){
			case 1:
				hombre++;
				sumaedad=a[i].edad+sumaedad;
				break;
			case 2:
				mujer++;
				break;
		}
	}
	printf("\n\n\t\tRESULTADOS DEL VECTOR\n\n");
	printf("Nombre			Edad			Sexo\n");
	for(i=0;i<n;i++){
		printf("\n%-15s%11d%25d",a[i].nombre,a[i].edad,a[i].sexo);
	}
	
	printf("\n\n\nCantidad de mujeres: %d\n",mujer);
	printf("\nPromedio de edad de hombres: %d",sumaedad/hombre);
	
}
