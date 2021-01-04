/*Desarrollar un sistema que permita al usuario dimensionar la longitud de un vector que contenga numeros. 
La longitud debe ser mayor a 5. Los numeros a ingresar por teclado en el vector deben ser menores a 50.
 Imprimir por pantalla el menor y mayor numero ingresado.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	int m=0;
	while(m<=5){
		printf("DIMENSIONE EL VECTOR: ");
		scanf("%d",&m);
		system("cls");
		if(m<=5){
			printf("\n\tLa dimension del vector debe ser mayor a 5. Vuelva a intentarlo. \n");
		}
	}
	printf("Vector dimensionado a %d",m);
	
	int a[m],i=1;
	
	while(i<=m){
		a[i]=100;
		while(a[i]>=50){
			printf("\nNumero %d: ",i);
			scanf("%d",&a[i]);
			system("cls");
			if(a[i]>=50){
				printf("\n\tEl numero ingresado debe ser menor a 50. Vuelva a intentarlo. \n");
			}
		}
		i++;
	}
	
	printf("\n\t\tNumeros ingresados\n\n");
	i=1;
	while(i<=m){
		printf("\n\t\tNumero %d",i,a[i]);
		i++;
	}
	
	i=1;
	int mayor,menor;
	while(i<=m){
		if(i==1){
			mayor=a[i];
			menor=a[i];
		}else{
			if(a[i]>mayor){
				mayor=a[i];
			}
			if(a[i]<menor){
				menor=a[i];
			}
		}
		
		i++;
	}
	
	printf("\n\n\nEl menor numero ingresado es %d",menor);
	printf("\nEl mayor numero ingresado es %d\n\n",mayor);
	
	
	
	}



