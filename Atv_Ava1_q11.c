#include<stdio.h>
#define MAX 3

void calculamedia (float somaSalario, int cont);
float identificaMaiorSalario (float salario[MAX],int i);
float identificaMenorSalario (float salario[MAX],int i);

int main(){
	
	int matricula[MAX],i=0,cont=0;
	float salario[MAX],somaSalario=0,maiorSalario=0,menorSalario=0;
	char continuar = 'S';
	
	
	while(continuar == 'S') {
		printf("Informe a matricula %d: ", i+1);
		scanf("%d", &matricula[i]);
		printf("Informe o salario do funcionario %d: ", i+1);
		scanf("%f", &salario[i]);
		somaSalario += salario[i];
		cont++;
		maiorSalario = identificaMaiorSalario(salario,i);
		menorSalario = identificaMenorSalario(salario,i);
		
		printf("\nDeseja continuar? [S/N]\n");
		fflush(stdin);
		continuar = getch();
		continuar = toupper(continuar);
		i++;		
	}
	printf("\n");
	calculamedia (somaSalario,cont);
	printf("\nMaior: %.2f\n",maiorSalario);
	printf("Menor: %.2f\n",menorSalario);			
		
	return 0;
}

void calculamedia (float somaSalarios, int cont){
	printf("Media = %.2f", somaSalarios/cont);	
}
float identificaMenorSalario (float salario[],int i){
	float menorSal = salario[0];
	int k;
	
	for(k=1;k < i;k++){
		if(menorSal>salario[k]){
			menorSal=salario[k];
		}
	}
	return menorSal;
}
float identificaMaiorSalario (float salario[],int i){
	float Msalario = salario[0];
	int k;
	
	for(k=1;k <=i;k++){
		if(Msalario<salario[k]){
			Msalario=salario[k];
		}
	}
	return Msalario;
}



