#include<stdio.h>
main (){
	int origen;
	int fin;
	int divisible;
	
	printf("Ingrese el valor desde donde empieza el conteo: ");
	scanf("%d",&origen);
	printf("\nIngrese el valor hasta donde va el conteo: ");
	scanf("%d",&fin);
	printf("\nIngrese el valor que desea saber si es divisible o no: ");
	scanf("%d",&divisible);
	while(origen<=fin){
		if(origen%divisible==0){
			printf("\n%d es divisible por %d",origen,divisible);
			}
			else{
			printf("\n%d no es divisible por %d",origen,divisible);
			}
			origen=origen+1;
		
	}
	}

