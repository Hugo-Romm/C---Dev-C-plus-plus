#include <stdio.h>

int main(){
	int a;//Se declara un valor entero, en este caso la "a".
	printf("Asigne un valor a a:");// El usuario ingresa un numero.
	scanf("%d",&a);// Empieza a escanear el numero ingresado.
	printf("El valor de a es:%d\n\n",a);// aqui da el resultado.
	
	
	char b[50];//Se declara un valor de tipo caracter, en la letra b, el numero 50 representa cuantas letras puede tener el resultado.
	printf("Asigne una letra a b:");//El usuario ingresa un nombre.
	scanf("%s",&b);//Empieza a escanear el nombre ingresado.
	printf("El valor Asignado a b es: %s\n\n",b);//Aqui da el resultado del nombre ingresado.
	
	float c;//Se declara el valor de tipo flotante, ejemplo: 9.56, y se almacena en la letra c.
	printf("Asigne un numero a c:");//El usuario ingresa el numero.
	scanf("%f",&c);//Empieza a escanear el numero ingresado.
	printf("El valor de c es:%.2f\n\n",c);//Da el resultado que ingreso el usuario.

	
}
