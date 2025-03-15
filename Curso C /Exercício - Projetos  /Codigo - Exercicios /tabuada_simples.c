#include <stdio.h>

int main(){


	// Introducao ao programa

	printf("----TABUADA SIMPLES---- \n");

	// Declarando Variavel

	int numero;

	// Entrada

	printf("Insira o número que deseja a Tabuada: \n");
	scanf("%d", &numero);

	// Processo

	int operacao_10 = numero * 10;
	int operacao_9  = numero * 9;
	int operacao_8  = numero * 8;
	int operacao_7  = numero * 7;
	int operacao_6  = numero * 6;
	int operacao_5  = numero * 5;
	int operacao_4  = numero * 4;
	int operacao_3  = numero * 3;
	int operacao_2  = numero * 2;
	int operacao_1  = numero * 1;


	// SAIDA

	printf("TABUADA DO %d \n", numero);

	printf(" %d x 1 = %d \n",numero, operacao_1);
	printf(" %d x 2 = %d \n",numero, operacao_2);
	printf(" %d x 3 = %d \n",numero, operacao_3);
	printf(" %d x 4 = %d \n",numero, operacao_4);
	printf(" %d x 5 = %d \n",numero, operacao_5);
	printf(" %d x 6 = %d \n",numero, operacao_6);
	printf(" %d x 7 = %d \n",numero, operacao_7);
	printf(" %d x 8 = %d \n",numero, operacao_8);
	printf(" %d x 9 = %d \n",numero, operacao_9);
	printf(" %d x 10 = %d \n",numero, operacao_10);




}
