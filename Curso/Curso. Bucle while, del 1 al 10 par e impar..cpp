#include<stdio.h>
main(){
	int n=1;
	
	while(n<=10){
		if(n%2==0){
			printf("El numero %d es par\n",n);
		}
		if(n%2!=0){
			printf("El numero %d es impar\n",n);
		}
		
		n=n+1;
	}
	
}
