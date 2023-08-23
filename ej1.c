#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mostrar (){
	
	char nombre[20],apellido[20];
	
	system("cls");
	
	printf("\n Introduzca su nombre (menos de 20 caracteres): ");
	gets (nombre);
	printf("\n Introduzca su apellido (menos de 20 caracteres): ");
	gets (apellido);
	
	
	
	printf("\n Nombre: %s", nombre);
	printf("\n Apeliido: %s", apellido);
	system("pause");
}
	
	int main()    {
		mostrar();
		
		return 0;
		
	} 
	
