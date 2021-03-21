#include<stdio.h>

int main(){
	float validavalores (float valor);
	int validaQtdeElementos (int qtdElementos);
	
	float dados[100];
	int i, qtdElementos=0,totalElementos=0,somaTotal=0;
	
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &qtdElementos);
	
	totalElementos = validaQtdeElementos(qtdElementos);
	
	
	for(i=0;i<totalElementos;i++){
		printf("Informe o valor do elemento numero %d : ", i+1);
		scanf("%f",&dados[i]);
		dados[i] = validavalores(dados[i]);	
		somaTotal += dados[i];	
	}		
	printf("A somatoria dos %d elementos do vetor dados e igual : %d", totalElementos, somaTotal);
	return 0;
}
	
float validavalores (float valor){
	do{			
		if(valor < 0 ){
			printf("Erro,valor invalido, informe um valor superior a 0: ");
			scanf("%f",&valor);							
		}			
	}while(valor < 0 );
return (valor);
}

int validaQtdeElementos (int qtdElementos){
	do{			
		if(qtdElementos <= 0 || qtdElementos > 100 ){
			printf("Erro,quantidade invalida, informe uma quantidade de elementos maior que 0 e de ate 100 elementos: ");
			scanf("%d",&qtdElementos);							
		}			
	}while(qtdElementos <= 0 || qtdElementos > 100);
return (qtdElementos);
}
	
	
