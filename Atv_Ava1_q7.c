#include<stdio.h>
void aumento10 (float preco[100]);
void aumento(float preco[100]);
int main(){
	
	float preco[100], perc;
	int i, opc;
	char cont = 'S';	
	for (i=0;i<preco[i];i++){
		while(cont != 'N' && i<=100){
			printf("Informe o preco do disco %d: ", i+1);
			scanf("%f", &preco[i]);	
			printf("Deseja informar o preco de outro disco? S/N\n");
			fflush(stdin);
			scanf("%c", &cont);		
			cont = toupper(cont);
			i++;		
		}
	}				
	do{
		printf("\t\t\t\nEscolha uma opcao:\n");
		printf("================================================\n");
		printf(" 1 - Aplicar 10 por cento de aumento em todos os discos.\n");
		printf(" 2 - Escolher o percentual de aumento a ser aplicado.\n");
		printf("================================================\n");
		scanf ("%i", &opc);
			if (opc<1 || opc>2){
				printf("opcao invalida\n");
				system("pause");
				system("cls");	
			}				
	}while(opc<1 || opc>2);
	switch (opc){
		case (1):			
			aumento10(preco);
		break;
		case(2):			
			aumento(preco);
		break;
	}
	return 0;
} 
void aumento10 (float preco[]){
	float vAtual;
	int i;
	for(i;i<preco[i];i++){
		vAtual = (preco[i]*0.10)+preco[i];		
		printf("O valor do disco %i era %.2f e passou a ser %.2f apos o aumento.\n\n", i+1, preco[i], vAtual);
	}
	printf("\t\t\tO Percentual aplicado foi de 10 por cento\n");
}
void aumento(float preco[]){
	float vAtual, percentual;
	int i;
	printf("Informe o percentual desejado: \n");
	scanf("%f", &percentual);

	for (i;i<preco[i];i++){
		vAtual = (preco[i] * (1 + (percentual/100)));	
		printf("O valor do disco %i era %.2f e passou a ser %.2f apos o aumento.\n\n", i+1, preco[i], vAtual);
	}
	printf("\t\t\tO Percentual aplicado foi de %.2f\n", percentual);
	
}
	


