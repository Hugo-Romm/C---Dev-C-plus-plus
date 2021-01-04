#include<stdio.h>

int main(){
	int a,b;//Se declaran los valores enteros.
	printf("Ingrese dos numeros: ");//Se imprime en pantalla.
	scanf("%d %d",&a,&b);//Se escanea lo que se ingreso en pantalla.
	
	printf("La suma de %d con %d es: %d\n\n",a,b,a+b);//Se suman los numeros.
	printf("La resta de %d con %d es: %d\n\n",a,b,a-b);//Se restan los numeros.
	printf("La multiplicacion de %d con %d es: %d\n\n",a,b,a*b);//Se multiplican los numeros.
	printf("La division de %d con %d es:%d\n\n",a,b,a/b);//Se dividen los numeros.
	
}
