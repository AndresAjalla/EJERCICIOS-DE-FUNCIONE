#include <stdio.h>
#include <stdlib.h>

void horas (float a,char eleccion);


int main(int argc, char *argv[]) {
	
	
	float a;
	char eleccion;
	
	printf ("\n 1_convertir dias a horas");
	printf ("\n 2_convertir horas a dias");
	
	printf ("\n elija una opicion: ");
	scanf ("%c",&eleccion);
	if (eleccion=='1'){
		
		printf ("\n Ingrese cantidad de dias: ");
		scanf ("%f",&a);
		horas(a,eleccion);
	}
	else if (eleccion=='2'){
		printf ("\n Ingrese cantidad de horas: ");
		scanf ("%f",&a);
		horas (a,eleccion);
	}
	return 0;
}

void horas (float a,char eleccion) {
	if (eleccion=='1'){
		float hs;
		hs=a*24;
		printf("\n cantidad de horas: %f",hs);
		
	}
	else if (eleccion=='2'){
		float ds;
		ds=a/24;
		printf("\n cantidad de dias: %f",ds);
	}
	
}


