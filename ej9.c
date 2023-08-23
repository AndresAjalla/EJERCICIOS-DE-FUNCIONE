#include <stdio.h>
#include <stdlib.h>
void prom (float notas, int cant_notas);

int main(int argc, char *argv[]) {
	
	float notas,n;
	int i=0,cant_notas;
	
	printf("\n ¿Cuantas notas va a ingresar? : ");
	scanf("%d",&cant_notas);
	
	
	for (i=1;i<=cant_notas;i++) {
		
		printf ("\n Ingrese nota %d: ",i);
		scanf ("%f",&n);
		
		notas=notas+n;
	}
	prom(notas,cant_notas);
	
	return 0;
	
}

void prom (float notas, int cant_notas) {
	float promedio;
	promedio= notas/cant_notas;
	
	
	if (promedio<5) {
		printf("\n Su promedio final es: 0");	
	}
	else if (promedio>=5 && promedio<6) {
		printf("\n su promedio final es: 1");
	}
	else if (promedio>=7 && promedio<=8) {
		printf("\n su promedio final es: 2");
	}
	else if (promedio>=8 && promedio<=9) {
		printf("\n su promedio final es: 3");
	}
	else {
		printf("\n su promedio final es: 4");
	}
}





