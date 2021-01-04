#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int a,b=1,div=0;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	while(b<=a){
		if(a%b==0){
			div++;
		}
		b++;
	}
	if(div==2){
		printf("\nEl numero es primo");
	}else{
		printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tEl numero no es primo");
	}
	getch();
}
