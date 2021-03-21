#include<stdio.h>
#define MAX 100

void maiorSalario (float salario[MAX],int i);
void menorSalario (float salario[MAX],int i);

int main(){
	
	int matricula[MAX],i=0;
	float salario[MAX];
	char continuar='S';
	
	
	while(continuar == 'S' || continuar == 's'){
		printf("Informe a matricula do colaborador %d: \n", i+1);
		scanf("%d", &matricula[i]);
		printf("Informe o Salario do colaborador %d: \n", i+1);
		scanf("%f", &salario[i]);	
		
		printf("Deseja continuar? [S/N]\n");
		continuar = getch();
		continuar = toupper(continuar);
		i++;		
	}
	maiorSalario(salario, i);
	menorSalario(salario, i);
		
	return 0;
}

void maiorSalario (float salario[],int i){
	float Msalario =salario[0];
	int k;
	
	for(k=1;k <=i;k++){
		if(Msalario<salario[k]){
			Msalario=salario[k];
		}
	}
	printf("\nMaior Salario: R$ %.2f\n", Msalario);
}

void menorSalario (float salario[],int i){
	float menorSal = salario[0];
	int k;
	
	for(k=1;k < i;k++){
		if(menorSal>salario[k]){
			menorSal=salario[k];
		}
	}
	printf("\Menor Salario: R$ %.2f\n", menorSal);
}
	
	
	
	
