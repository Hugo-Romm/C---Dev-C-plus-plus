#include<stdio.h>
#include<stdlib.h>
main(){
	char nombre1[100],nombre2[100],nombre3[100],nombre4[100],nombre5[100];
	int numero1,numero2,numero3,numero4,numero5;
	
	printf("\t\tAgenda Telefonica\n\n");
	printf("Ingrese el nombre del primer contacto: ");
	scanf("%s",&nombre1);
	printf("Ingrese el numero de %s: ",nombre1);
	scanf("%d",&numero1);
	system("cls");
	
	printf("Ingrese el nombre del segundo contacto: ");
	scanf("%s",&nombre2);
	printf("Ingrese el numero de %s: ",nombre2);
	scanf("%d",&numero2);
	system("cls");
	
	printf("Ingrese el nombre del tercer contacto: ",nombre3);
	scanf("%s",&nombre3);
	printf("Ingrese el numero de %s: ",nombre3);
	scanf("%d",&numero3);
	system("cls");
	
	printf("Ingrese el nombre del cuarto contacto: ",nombre4);
	scanf("%s",&nombre4);
	printf("Ingrese el numero de %s: ",nombre4);
	scanf("%d",&numero4);
	system("cls");
	
	printf("Ingrese el nombre del quinto contacto: ",nombre5);
	scanf("%s",&nombre5);
	printf("Ingrese el numero de %s: ",nombre5);
	scanf("%d",&numero5);
	system("cls");
	
	printf("Nombre\t\tNumero\n\n");
	printf("%s\t\t%d\n",nombre1,numero1);
	printf("%s\t\t%d\n",nombre2,numero2);
	printf("%s\t\t%d\n",nombre3,numero3);
	printf("%s\t\t%d\n",nombre4,numero4);
	printf("%s\t\t%d\n",nombre5,numero5);
	
	
	
	

}
