#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=0,c=0,cd5=0,cd3=0;
	while(c<10){
		c=c+1;
		printf("Introducir valor\n");
		scanf("%d",&n);
		if(n%5==0){
			cd5=cd5+1;
		}else{
			if(n%3==0){
				cd3=cd3+1;
			}
		}
	}
	printf("Cantidad de multiplos de 5= ",cd5);
	printf("\nCantidad de multiplos de 3= ",cd3);
	
}
