
#include <stdio.h>

/// ATIVIDADE DE FIXAÇÃO

/// 1. FUNÇÃO VOID
/// Crie uma função chamada saudacao do tipo void que, quando chamada, imprime uma mensagem de boas-vindas na tela. A mensagem deve ser: "Bem-vindo ao programa de funções em C!"

void mensagem_saudacao(void) {
    printf("Bem-vindo ao programa de funções em C!\n");
}

/// 2. FUNÇÃO COM RETORNO
/// Crie uma função chamada soma que recebe dois números inteiros como parâmetros e retorna o valor da soma desses dois números.

int soma(int num1, int num2) {
    return num1 + num2; // Retorna a soma de num1 e num2
}

/// 3. FUNÇÃO COM PARÂMETROS POR REFERÊNCIA
/// Crie uma função chamada dobrarValor que recebe um ponteiro para uma variável inteira como parâmetro e dobra o valor dessa variável.

void dobrarValor(int *dobrado, int resultado) {
    *dobrado = resultado * 2; // Dobra o valor da soma e armazena no endereço apontado por dobrado
}

int main(void) {

    int num1 = 5, num2 = 3; // Inicializando os números para a soma
    int resultado;
    int dobrado; // Variável para armazenar o valor dobrado

    // Chama a função saudacao
    mensagem_saudacao();

    // Chama a função soma e armazena o resultado
    resultado = soma(num1, num2);

    printf("A soma entre o número %d e o número %d teve o resultado de: %d\n", num1, num2, resultado);

    // Chama a função dobrarValor para dobrar o resultado
    dobrarValor(&dobrado, resultado);

    printf("A soma com o valor dobrado fica = %d\n", dobrado);

    return 0;
}
