#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int MAT[10][10];
	int f=0,c=0;
	
	while(f<10){
		printf("\n\t\n");
		while(c<10){
			printf("%4d",MAT[f][c]);
			c++;
			printf("\n\t\n");
		}
		f++;
		printf("\n\t\n");
	}
}
