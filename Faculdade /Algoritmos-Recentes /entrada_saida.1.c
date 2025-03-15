#include<stdio.h>

float valor_reais; // declarando variável do tipo float 
float cotacao_dolar;  // declarando variável do tipo float 

float calculo_conversao(float valor_reais, float cotacao_dolar){
    return valor_reais / cotacao_dolar;
}

int main(){
    // Repetir até que o valor seja válido
    do {
        printf("Insira o valor (R$) que deseja converter, sem pontos ou vírgulas ex(1500): \n");
        if(scanf("%f", &valor_reais) != 1){
            printf("ERRO \nDigite um número válido para o valor em reais.\n");
            while(getchar() != '\n'); // Limpar o buffer de entrada
        } else {
            break;  // Se o valor for válido, sai do loop
        }
    } while(1);

    // Repetir até que a cotação seja válida
    do {
        printf("Insira a cotação (USD) que deseja usar como base de conversão, inserindo o pontos para números reais. ex(5.80): \n");
        if(scanf("%f", &cotacao_dolar) != 1){
            printf("ERRO \nDigite um número válido para a cotação.\n");
            while(getchar() != '\n'); // Limpar o buffer de entrada
        } else {
            break;  // Se a cotação for válida, sai do loop
        }
    } while(1);

    // Exibe o resultado da conversão
    printf("Cotação USD: %.2f\n", cotacao_dolar); 
    printf("Valor em R$: %.2f\n", calculo_conversao(valor_reais, cotacao_dolar)); 

    return 0;
}
