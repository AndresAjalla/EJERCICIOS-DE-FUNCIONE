#include <stdio.h>
#include <stdlib.h>    
#include <string.h>

void media(int num1, int num2, int num3);

int main() {
	
	int num1, num2, num3;
	
	printf("\n Ingrese un numero: ");
	scanf("%d",&num1);
	printf("\n Ingrese otro numero: ");
	scanf("%d",&num2);
	printf("\n Ingrese otro numero: ");
	scanf("%d",&num3);
	
	media (num1,num2,num3);
	return 0;
}
void media (int num1,int num2, int num3){
	float resultado;
	resultado=(num1+num2+num3)/3;
	printf("\n La media es de: %f",resultado);
	
}
	
