/* Ejercicio 1
Desarrollar un sistema que permita introducir tres valores,sume los primeros dos numeros y el resultado se reste por el tercero.*/
#include<stdio.h>
#include<stdlib.h>

main(){
	int n1,n2,n3;
	printf ("\nIngrese tres valores: \n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	printf("\nEl Resultado es: %d\n\n",n1+n2-n3);
	
}
