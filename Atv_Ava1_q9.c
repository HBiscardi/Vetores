#include<stdio.h>
#define MAX 100

int main(){
	
	int idade[MAX],i=0,maisVelha=0,cont=0,posicao=0;	
	char continuar='S';
	float mediaIdades = 0;
	
	while(continuar == 'S' || continuar == 's'){
		printf("Informe a idade %i%c pessoa: \n", i+1,167);
		scanf("%d", &idade[i]);
		
		mediaIdades += idade [i];
		cont++;
		
		if(maisVelha <= idade[i]){
			maisVelha = idade[i];
			posicao = i;
		}
				
		printf("Deseja Informar nova idade? [S/N]\n");
		continuar = getch();//substitui a funcao scanf para caracteres.
		continuar = toupper(continuar);//converte para maiusculo
		i++;						
	}
	printf("Media das idades Idade: %.1f\n\n",mediaIdades/cont);
	printf("Mais velha com %d ano[s]\n", maisVelha);
	
	for(i = 0; i< idade[i];i++){
		if(maisVelha == idade[i]){
			printf("A Posicao dentro do vetor: [%d]\n", i);			
		}		
	}
	return 0;
}
