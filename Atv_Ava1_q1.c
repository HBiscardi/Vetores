#include<stdio.h>
main(){
	
	float notas[30];
	int indice;
	int contador=1;
	for(indice;indice<3;indice++){
		
		printf("Informe a nota do %i%c aluno: ", contador,167);
		scanf("%f", &notas[indice]);
		contador++;				
	}
	
	for(indice=0;indice<3;indice++){
		int contador;
		printf("\n====================================\n");
		printf("A nota do %i%c Aluno foi:%.2f\n", contador+1,167,notas[indice]);
		contador++;
		
	}
}
