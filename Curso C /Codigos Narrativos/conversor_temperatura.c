#include <stdio.h>

int main(){

	// Introducao ao Programa

	printf("----CONVERSOR DE TEMPERATURA---- \n");

	// Declarando Variavel

	float temperatura_celsius;

	// ENTRADA
	printf("Insira a temperatura em graus Celsius: ");
	scanf("%f", &temperatura_celsius);

	// PROCESSO
	float temperatura_convertida = (temperatura_celsius * 9/5) + 32;


	// SAIDA
	printf("A temperatura convertida para Fahrenheit é: %.1f", temperatura_convertida);


}
