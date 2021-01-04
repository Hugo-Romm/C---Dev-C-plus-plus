#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int a=0,t1=1,t2=0,t3=0;
	while(a<=15){
		t2=t3;
		t3=t1+t3;
		t1=t2;
		a=a+1;
	}
	printf("\nEl numero %d es el decimo quinto termino (15) de la serie de fibonacci\n",t1);
	int i=1;
	double long fac=1;
	while(i<=t1){
	fac=fac*i;
	i++;	
	}
	printf("\n\tEl factorial de %d es %d",t1,fac);
}
