#include <stdio.h>

int main(){

	// INTRODRUZINDO PROGRAMA
	printf("----CALCULADORA SIMPLES---- \n"); // Imprimindo o nome do programa
	printf("Este Programa realiza as 4 operacoes básicas entre 2 números \n"); // Imprimindo uma mensagem de orientacao ao usuário

	// DECLARANDO VARIAVEIS
	int num1; // Criando a variável num1 do tipo inteiro
	int num2; // Criando a variável num2 do ripo inteiro

	// ENTRADA
	printf("Insira o primeiro Número: "); // Indicando o usuário a inserir o primeiro número da operacao
	scanf("%d", &num1); // Recebendo o primeiro número do tipo inteiro e armazenando o seu valor na variável num1

	printf("Insira o segundo Número: "); // Indiando o usuário a inserir o segundo número
	scanf("%d", &num2); // Recebendo número 2 do tipo inteiro e armazenando em variável num2


	// DECLARANDO VARIAVEIS
	int adicao = num1 + num2; // Criando a variavel adicao do tipo inteiro, que realiza uma operacao
	int subtracao = num1 - num2; // Criando a variavel subtracao do tipo inteiro,  realiza uma operacao
	int divisao = num1 / num2; // Criando a variavel divisao do tipo inteiro,  realiza uma operacao
	int multiplicacao = num1 * num2; // Criando a variavel multiplicacao do tipo ineteiro,  realiza uma operacao


	// IMPRESSAO
	printf("ADICAO %d \n", adicao); // Imprimindo a operacao de adicao
	printf("SUBTRACAO %d\n", subtracao); // Imprimindo a operacaoo de subtracao
	printf("DIVISAO %d\n", divisao); // Imprimindo a operacao de divisao
	printf("MULTIPLICACAO %d\n", multiplicacao); // Imprimindo a operacao de multiplicacao


}
