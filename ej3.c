#include <stdio.h>
#include <stdlib.h>    
#include <string.h>

int Simb(int num) {
	if (num >= 0 && num <= 127) {
		printf("El s�mbolo correspondiente al n�mero %d es: %c\n", num, (char)num);
	} 
	else {
		printf("\n Error");
		printf("\n Numero fuera de rango o dato invalido");
	}
}

int main() {
	int num;
	
	printf("Ingrese un n�mero (entero): ");
	scanf("%d", &num);
	
	Simb(num);
	
	system("pause");
	
	return 0;
}



