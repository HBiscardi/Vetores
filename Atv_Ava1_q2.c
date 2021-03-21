#include<stdio.h>
main(){
	
	float notas[50];
	int indice, qtdeAlunos, contador=1;
	
	do{
		printf("Informe a quantidade de Alunos:\n");
		scanf("%i", &qtdeAlunos);
		if (qtdeAlunos<0|| qtdeAlunos>50){
			printf("Quantidade invalida\n");
			printf("o numero de alunos deve ser maior que zero e menor que cinquenta\n");
		}
	}while(qtdeAlunos<=0|| qtdeAlunos>50);	

	for(indice;indice<qtdeAlunos;indice++){
		
		printf("Informe a nota do %i%c aluno: ", contador,167);
		scanf("%f", &notas[indice]);
		contador++;				
	}
	printf("===============================\n\n");
	for(indice=0;indice<qtdeAlunos;indice++){
		int contador;
		
		printf("A nota do %i%c Aluno foi:%.2f\n", contador+1,167,notas[indice]);
		contador++;
		
	}
}
