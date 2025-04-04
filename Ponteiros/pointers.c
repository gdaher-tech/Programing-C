// Operador de desferenciamento (*) - Declarar variável do ponteiro, acessar o valor armazenado no endereço. 

// Operador de endereço (&) - retorna o endereço de uma variável, acessa o endereço de uma variável para um ponteiro. 


#include <stdio.h>

int main(){

    int m = 100; 
    int *ptr = &m;


    // O valor da variável m é 100
    printf("O valor de m é; %d \n", m); 

    // O endereço da variável m é 0x16fc1f30c
    printf("O endereço da variável m é; %p \n", &m); 

    // O endereço do ponteiro é 0x16fc1f30c
    printf("O endereço de memória que a variável m esta alocada usando ponteiro é: %p\n", ptr);


    int myage = 21; 

    // Imprimindo o valor da minha variável
    printf("Imprimindo o valor da minha variável: %d \n", myage); 

    // Imprimindo o endereço da minhan variável
    printf("Imprimindo o endereço da minha variável; %p \n", &myage); 

    // Se a minha variável tem um valor e um endereço eu posso alterar ela indo até o endereço e mudando o valor contido la, 
    //fazer isto faz com que aproveitemos os espaços de memória

    // criando dois valores inteiros com o objetivo de mudar torcar o valor entre eles. 
    int number1 = 10; 
    int number2 = 5; 

    //atribuindo o valor do número 2 ao número 1
    number1 =  number2; 

    printf("%d\n", number1); // saída = 5 


    // PERGUNTA 1 - os endereços de number1 e number2 são o mesmo? 

    printf("O endereço do número 1 é %p, e o endereço do número 2 é %p ", &number1, &number2); 

    // RESPOSTA - Não, cada variável tem seu endereço. CORRRETO. 

    // PERGUNTA 2 - Quais sao os valores contidos nos dois endereços? 



}