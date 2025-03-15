
**Requisitos:**

- Peça ao usuário uma temperatura em Celsius (por exemplo: `25.5`).
- Converta para Fahrenheit usando a fórmula: `F = (C * 9/5) + 32`.
- Exiba o resultado com `printf`.

```c
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
```

### Introducao ao Programa 
```c
printf("----CONVERSOR DE TEMPERATURA---- \n");
```
Mensagem impressa para o usuário, indicando que o programa iniciou. 

### Declarando Variavel 
```c
float temperatura_celsius; 
```
Variável `temperatura_celsius` do tipo inteiro declarada. 

### Entrada 
```c
printf("Insira a temperatura em graus Celsius: ");

scanf("%f", &temperatura_celsius);
```
Utilizando printf( ) para indicar o usuário a inserir a temperatura em graus celsius. 

Utilizando scanf( ) para armazenar os dados digitados na variável `temperatura_celsius` como tipo `float` (ponto flutuante). 

### Processo 
```c
float temperatura_convertida = (temperatura_celsius * 9/5) + 32;
```
Definindo a variável `temperatura_convertida` com o valor da temperatura_celsius com a fórmula de conversão aplicada. 

### Saida 
```c
printf("A temperatura convertida para Fahrenheit é: %.1f", temperatura_convertida);
```
Imprimindo um texto indicando que a temperatura nele esta convertida, usei o %.1f para fazer referência a variável temperatura_convertida  float que chamo no final. 
Desta forma no lugar de %.1f é impresso a temperatura. 







