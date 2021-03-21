#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

main(){

	int i,caracteres;
	char nome[30];

	printf("Digite uma palavra: ");
	gets(nome);
	caracteres=strlen(nome);
	
	printf("\nApalavra inversa e:");
	for (i=caracteres; i>=0; i--)
	printf("%c",nome[i]);
	printf("\n\n");
	system("pause");

return 0;

}
