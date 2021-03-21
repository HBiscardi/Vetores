#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int a[10], b[10], c[10], i,x=0;
	char cont=0,soma;
	

	for (i;i<10;i++){
		a[i] = rand()%100;
		b[i] = rand()%100;
		c[i] = a[i]+b[i];
	}
	
	do{
		printf("informe um numero para pesquisa-lo no vetor C:");
		scanf("%d", &x);
		
		for(i = 0;i<10;i++){
			
			if( x== c[i]){
				printf("Encontrado posicao [%d]\n", i);
				soma++;
			}						
		}
		if	(soma==0){
			printf("Nao encontrado\n");
		}	
		
		printf("Deseja pesquisar novo numero? S/N\n ");
		fflush(stdin);
		scanf("%c", &cont);		
		cont = toupper(cont);
		soma=0;
		
	}while(cont == 'S');
		
	printf ("Vetor A\n");
	for(i=0;i<10;i++){
		printf("%d ", a[i]);
	}
	printf ("\nVetor B\n");
	for(i=0;i<10;i++){
		printf("%d ", b[i]);
	}
	printf ("\nVetor C\n");
	for(i=0;i<10;i++){
		printf("%d ", c[i]);
	}	
}
