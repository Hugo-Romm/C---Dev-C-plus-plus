/*Escribir un programa que permita definir un arreglo bidimensional,
Cargar el arreglo de forma automatica.
Imprimir el resultado y las diagonales del arreglo, y que solo se permitan mayores a 30. */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int n=0;
	printf("Ingrese el tama%o de la matriz: ",164);
	scanf("%d",&n);
	int MAT[n][n];
	int f=0,c=0;
	srand(NULL);
	while(n>f){
		f=f+1;
		c=0;
		while(n>c){
			c=c+1;
			MAT[f][c]=(rand()%50)+1;
			if(MAT[f][c]<30){
				printf("*");
			}
			printf("%4d",MAT[f][c]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	f=0;
	
	while(n>f){
		f=f+1;
		c=0;
		while(n>c){
			c=c+1;
			if(c==f||f+c==n+1){
			printf("%5d",MAT[f][c]);	
			}else{
			printf(" * ");
			}	
		}
	printf("\n\n");	
	}
	return 0;
}

