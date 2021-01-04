/*Crear un sistema que permita al usuario dimensionar una matriz cuadrada,
cargarla con los numeros aleatorios, imprimir toda la matriz, e imprimir las diagonales de la matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int n=0;
	printf("\n\n\nIngrese el tama%co de la matriz: ",164);
	scanf("%d",&n);
	int MATRIZ[n][n];
	int fila=0,columna=0;
	srand(NULL);
	while(n>fila){
		fila=fila+1;
		columna=0;
		while(n>columna){
			columna=columna+1;
			MATRIZ[fila][columna]=(rand()%50)+1;
			printf("%4d",MATRIZ[fila][columna]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	fila=0;
	
	while(n>fila){
		fila=fila+1;
		columna=0;
		while(n>columna){
			columna=columna+1;
			if(columna==fila||fila+columna==n+1){
			printf("%5d",MATRIZ[fila][columna]);	
			}else{
			printf(" * ");
			}	
		}
	printf("\n\n");	
	}
	return 0;
}
