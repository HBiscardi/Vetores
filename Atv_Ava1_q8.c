#include<stdio.h>
int main(){
	
	char caracteres[30], temp;
	int i,j, qtde;
	
	do{
		printf("Informe a quantidade de caracteres:");
		scanf("%i",&qtde);
			if(qtde <=0 || qtde >30){
				printf("o valor informado deve estar entre 1 e 30\n");
			}
	}while(qtde <=0 || qtde >30);
		
	
	for(i=0;i<qtde;i++){
		printf("\nInforme a %i%c letra: \n",i+1,167);
		fflush(stdin);
		caracteres[i] = getche();
		printf ("\n");							
	}			
		
	for(i=0;i<qtde;i++){
		for(j=0;j<(qtde-1);j++){
			if (caracteres[j]<caracteres[j+1]){
				temp = caracteres[j+1];
				caracteres[j+1] = caracteres[j];
				caracteres[j] = temp;
			}
		}
	}
	printf("============================================\n");
	for (i=0;i<qtde;i++){
		
		printf ("%c ",caracteres[i]);
		
	}
		
}	

	
	


