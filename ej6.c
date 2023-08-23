#include <stdio.h>
#include <stdlib.h>

int Entero (int num){
	if(num>0){
		printf("\n RESULTADO: 0");
	}
	else{
		printf("\n RESULTADO: 1, El numero es: %d",num*-1);
	}
}
	
	int main(){
		int num;
		printf("Ingrese un numero (entero): ");
		scanf("%d",&num);
		
		Entero(num);
		
		system("pause");
		return 0;
	}
		
		
		
		
		
