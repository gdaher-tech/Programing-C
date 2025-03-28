/// 1. Trocar valores entre duas variáveis
/// Crie uma função trocar que recebe dois ponteiros para int e troca os valores entre eles.
/// Exemplo: se a = 5 e b = 10, após a chamada trocar(&a, &b), a = 10 e b = 5.

#include <stdio.h>

void trocar(int *valor1, int *valor2, int temp){ // Cria uma funcao do tipo void com os ponteiros int valor1 e valor2, e a variável int temp 

    temp = *valor1; // Temp é uma variável que vai armazenas o valor1 temporariamente
    *valor1 = *valor2; // valor1 recebe o valor de valor2
    *valor2 = temp; // valor2 recebe o temp que possui o valor original de 1 

}

int main(){
    int a = 5;  // declarando e iniciando a variavel a com valor 5 
    int b = 10; // decalrando e iniciando a variavel b com valor 10
    int temp; // declarando a iniciando a variavel temp sem valor. 

    trocar(&a, &b, temp); // Chamando a funcao trocar e indicando os enderecos para cada variavel 

    printf("a = %d, b = %d", a, b); // Imprimindo resolucao 
}