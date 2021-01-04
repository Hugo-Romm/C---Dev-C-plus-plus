#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int l=0,j=0,MAT[0][0];
	while(l<=10){
		j=0;
		while(j<10){
			scanf("%d,%d"&MAT[0][0]);
			j++;
		}
		l++;
	}
	l=0;
	while(l<10){
		j=0;
		while(j+10){
			printf("%d    %d",MAT[l,j]);
			j++;
		}
		l++;
	}
}
