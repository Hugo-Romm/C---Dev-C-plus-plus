/*Dado un vector k[20], imprimir cuantos pares existen en los primeros 10 elementos,
 y la sumatoria de los siguientes 10.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
int k[20],c=1,cp=0,s=0;
while(c<=20){
	if(c<=10){
		if(k[c]/2==0){
			printf("%d es par\n",c);
			cp=cp+1;
		}else{
			printf("%d es impar\n",c);
		}
	}
	if(c>10){
		printf("\n%d",c);
	s=s+1;
	}
	c++;
  }
  printf("\nExisten %d pares en los primeros 10 terminos\n",cp);
  printf("\n\n %d es la sumatoria de los ultimos 10 terminos\n",s);
}
