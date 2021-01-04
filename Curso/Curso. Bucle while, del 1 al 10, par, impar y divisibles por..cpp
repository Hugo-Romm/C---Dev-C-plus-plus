#include<stdio.h>
main(){
	int n=1;
	int cantidad=0;
	int par=0;
	int impar=0;
	
	while(n<=10){
		if(n%2==0){
			printf("El numero %d es par",n);
			par=par+1;
			
		}
		else{
			printf("El numero %d no es impar",n);
			impar=impar+1;
		}
		
		if(n%3==0){
			printf(" y es divisible por tres\n",n);
			cantidad=cantidad+1;
		}
		else{
			printf(" y no es divisible por tres\n",n);
		}
		n=n+1;
	}
	
	printf ("\n cantidad de numeros pares: %d",par);
	printf ("\n cantidad de numeros impares: %d",impar);
	printf ("\n cantidad de numeros divisibles: %d",cantidad);
	
}
