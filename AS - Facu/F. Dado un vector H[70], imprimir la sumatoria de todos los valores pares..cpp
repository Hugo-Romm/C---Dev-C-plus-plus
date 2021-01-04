/* Dado un vector H[70], imprimir la sumatoria de todos los valores pares. */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int H[70],c=0,sp=0;
	while(c<70){
		if(H[c]%2==0){
			printf("\n%d",c);
			sp++;
		}
		c++;
	}
	printf("\n\tLa sumatoria de pares es %d",sp);
}
