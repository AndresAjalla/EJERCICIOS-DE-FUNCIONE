#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RESPUESTA (char respuesta, char digitos[7]);

int main(int argc, char *argv[]) {
	
	char digitos[7],i=0,respuesta;
	int numero;
	
	printf("\n Ingrese un numero de 6 digitos: ");
	gets (digitos);
	
	system ("cls");
	
	printf ("\n ******");
	
	printf("\n ¿Desea ver el numero ingresado? (Y/N): ");
	scanf ("%c",&respuesta);
	
	RESPUESTA(respuesta,digitos);
	
	system("pause");
	
	return 0;
}

void RESPUESTA (char respuesta, char digitos[7]){
	
	if (respuesta == 'Y' || respuesta == 'y') {
		printf("\n El numero que ingreso es: %s ",digitos); 
	} 
	else if (respuesta == 'N' || respuesta == 'n') {
		printf("\n HASTA LUEGO");
	} 
	else {
		printf("\n Opcion invalida");
	}
}
	
	
