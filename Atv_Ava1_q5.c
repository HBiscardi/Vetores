#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int vet[80];
	int i, opc,x, cont=0;
	
	do{	
		printf("Escolha uma opcao:\n");
		printf("1 - Preencher manualmente as 80 posicoes.\n");
		printf("2 - Randon.\n");
		scanf ("%i", &opc);
			if (opc<1 || opc>2){
				printf("opcao invalida\n");
			system("pause");
			system("cls");	
			}				
	}while(opc<1 || opc>2);
	switch (opc){
		case (1):
			for(i;i<80;i++){
				printf("Informe um numero inteiro: \n");
				scanf("%i", &vet[i]);
			}		
		break;
		case(2):
			for (i;i<80;i++){
				vet[i] = rand()%80;
			}
		break;
	}
	printf("Digite o numero que deseja encontrar\n");
	scanf("%i", &x);
	for (i=0; i<80; i++){
		if (x==vet[i])
			cont++;			
	}
	system("cls");	
	if (cont == 0){
		printf("numero nao encontrado dentro do vetor.\n");		
	}else{
		
		printf("O numero %i foi encontrado %i vezes. \n", x, cont);
		
		}	
	for(i=0; i<80; i++){
		if(x==vet[i]){			
			printf("Posicao:[%d] \n",i);
		}
	}					
	printf("\n\n\t\t\t\t\t\tMATRIZ PARA CONFERENCIA\n\n");
	for(i=0;i<80;i++){
		
		printf("\t%d ", vet[i]);
	}
	
}
