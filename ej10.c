#include <stdio.h>
#include <stdlib.h>

void operacion (int num, int num2,char eleccion);

int main(int argc, char *argv[]) {
	
	int num,num2;
	char eleccion;
	
	printf ("\n 1_division");
	printf ("\n 2_multiplicacion");
	printf("\n");
	printf ("\n elija una opcion: ");
	scanf ("%c",&eleccion);
	
	if (eleccion=='1') {
		printf("\n ingrese un numero: ");
		scanf("%d",&num);
		printf("\n ingrese otro numero: ");
		scanf("%d",&num2);
		
		operacion(num,num2,eleccion);
	}
	else if (eleccion=='2') {
		printf("\n ingrese un numero: ");
		scanf("%d",&num);
		printf("\n ingrese otro numero: ");
		scanf("%d",&num2);
		
		operacion(num,num2,eleccion);
	}
	return 0;
}

void operacion(int num, int num2, char eleccion){
	if (eleccion=='1') {
		float div;
		div=num/num2;
		printf ("\n Resultado: %f",div);
	}
	else if (eleccion=='2') {
		int mult;
		mult= num*num2;
		printf ("\n Resultado: %d", mult);
		
	}
} 
	
