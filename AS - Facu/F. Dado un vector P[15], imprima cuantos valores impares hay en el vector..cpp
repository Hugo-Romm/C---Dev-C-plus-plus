/* Dado un vector P[15], imprima cuantos valores impares hay en el vector. */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int P[15],a=0,b=0;
	while(a<15){
		if(P[a]%2!=0){
			printf("%d par\n",P[a]);
			b++;
		}
		a++;
	}
	printf("Valores impares %d",b);
}
