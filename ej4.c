#include <stdio.h>

void inter (float n1, float n2);


int main(int argc, char *argv[]) {
	
	float n1,n2;
	
	printf("\n ingrese un numero: ");
	scanf ("%f",&n1);
	printf("\n ingrese otro numero: ");
	scanf ("%f",&n2);
	
	inter(n1,n2);
	
	return 0;
}

void inter (float n1,float n2){
	float intermedio=0;
	
	intermedio= (n1+n2)/2;
	
	printf ("\n el intermedio es: %f ",intermedio);
	
	
	
	
}
	
