#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
	int n1,n2;
	int opc=1;
	
	while(opc>0 and opc<7){
		system("cls");
		printf("\n\t\t\t\tMENU\n\n\n");
		printf("Ingrese dos valores: \n");
		scanf("%d%d",&n1,&n2);
		printf("\n\n1. SUMAR\n\n");
		printf("2. RESTAR\n\n");
		printf("3. MULTIPLICAR\n\n");
		printf("4. DIVIDIR\n\n");
		printf("5. MODULO\n\n");
		printf("6. SALIR\n\n");
		
		printf("\nOpcion: ");
		scanf("%d",&opc);
		
		if(opc!=6){
			int resultado;
			if(opc==1){
				resultado=n1+n2;
			}else{
				if(opc==2){
					resultado=n1-n2;
				}else{
					if(opc==3){
						resultado=n1*n2;
					}else{
						if(opc==4){
							resultado=n1/n2;
						}else{
							resultado=n1%n2;
							
							
							}
						}
					}
				}
				printf("\n\tEl resultado es: %d\n\n\n",resultado);
			
			system("pause");
			}else{
			
			
			
		}
		
		}//Llave del while
			printf("\n\n\n\t\t\tFIN DEL PROGRAMA\n\n\n\n");
	}

	

