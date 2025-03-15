Crie um programa que solicita dois números ao usuário e uma operação matemática (+, -, *, /). Use `printf` e `scanf` para capturar a entrada do usuário e exiba o resultado da operação.

#### SOLUCAO EM CODIGO 
```c
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

int subtracao = num1 - num2; // Criando a variavel subtracao do tipo inteiro, realiza uma operacao

int divisao = num1 / num2; // Criando a variavel divisao do tipo inteiro, realiza uma operacao

int multiplicacao = num1 * num2; // Criando a variavel multiplicacao do tipo ineteiro, realiza uma operacao

  

printf("ADICAO %d \n", adicao); // Imprimindo a operacao de adicao

printf("SUBTRACAO %d\n", subtracao); // Imprimindo a operacaoo de subtracao

printf("DIVISAO %d\n", divisao); // Imprimindo a operacao de divisao

printf("MULTIPLICACAO %d\n", multiplicacao); // Imprimindo a operacao de multiplicacao

}
```


### Introduzindo programa 
```c
printf("----CALCULADORA SIMPLES---- \n"); // Imprimindo o nome do programa

printf("Este Programa realiza as 4 operacoes básicas entre 2 números \n"); // Imprimindo uma mensagem de orientacao ao usuário
```
**Introdução e indicação ao usuário.** 

`printf("----CALCULADORA SIMPLES----")` >Imprime a mensagem entre aspas ao usuário. 
`printf("Este Programa realiza as 4 operacoes básicas entre 2 números \n")` > Imprime a mensagem entre aspas ao usuário. 


### Declarando Variaveis
```c
int num1; // Criando a variável num1 do tipo inteiro

int num2; // Criando a variável num2 do ripo inteiro
```
**Declaração de Variáveis**

`int num1:` > Cria variável do tipo `int`  
`int num2:` > Cria variável do tipo `int`  


### Recebendo dados do usuario
```c
printf("Insira o primeiro Número: "); // Indicando o usuário a inserir o primeiro número da operacao

scanf("%d", &num1); // Recebendo o primeiro número do tipo inteiro e armazenando o seu valor na variável num1

  

printf("Insira o segundo Número: "); // Indiando o usuário a inserir o segundo número

scanf("%d", &num2); // Recebendo número 2 do tipo inteiro e armazenando em variável num2

```

`printf("Insira o primeiro Número: ");` > Imprime uma mensagem indicando o usuário a inserir o primeiro número. 

`scanf("%d", &num1);` > "%d" indica que o número que o usuário digitar será inteiro, `&num1`  armazena o valor digitado na variável num1. 

* O processo se repete para o segundo número. 

### Declarando Variaveis com operacoes matmáticas 
```c
int adicao = num1 + num2; // Criando a variavel adicao do tipo inteiro, que realiza uma operacao

int subtracao = num1 - num2; // Criando a variavel subtracao do tipo inteiro, realiza uma operacao

int divisao = num1 / num2; // Criando a variavel divisao do tipo inteiro, realiza uma operacao

int multiplicacao = num1 * num2; // Criando a variavel multiplicacao do tipo ineteiro, realiza uma operacao
```

`int adicao = num1 + num2;` > Cria a variável adição sendo tipo inteiro, que possui o valor de num1 + num2. 

`int subtracao = num1 - num2;` > Cria a variável adição sendo tipo inteiro, que possui o valor de num1 - num2. 

`int divisao = num1 / num2;` > Cria a variável adição sendo tipo inteiro, que possui o valor de num1 / num2. 

`int multiplicacao = num1 * num2;` > Cria a variável adição sendo tipo inteiro, que possui o valor de num1 x num2. 


### Impressao 
```c
printf("ADICAO %d \n", adicao); // Imprimindo a operacao de adicao

printf("SUBTRACAO %d\n", subtracao); // Imprimindo a operacaoo de subtracao

printf("DIVISAO %d\n", divisao); // Imprimindo a operacao de divisao

printf("MULTIPLICACAO %d\n", multiplicacao); // Imprimindo a operacao de multiplicacao
```

`printf("ADICAO %d \n", adicao);` > Usando a função printf( ) para imprimir "ADICAO",  %d no console é substituída pela variável `adicao`

* O processo se repete para todas as impressões, alterando somente a string e a referência de variável. 







