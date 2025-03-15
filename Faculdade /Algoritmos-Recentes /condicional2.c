#include <stdio.h>

int main() {
    float salario, valor_emprestimo;
    char nome[50];
    int parcelas; 

    printf("Insira o Nome do Cliente: ");
    scanf("%49s", nome);  // Corrigido: removido o '&'

    // Leitura do Salário com Validação
    do {
        printf("Insira o Salário: ");
        if (scanf("%f", &salario) != 1 || salario <= 0) {
            printf("Erro. O valor digitado não está no formato correto.\n");
            break; 
        }else{
            printf("Salário Cadastrado! \n"); 
            break;
        }
    }while(1); 

    do{
        printf("Digite o Valor do Empréstimo: ");
        if (scanf("%f", &valor_emprestimo) != 1 || valor_emprestimo <= 0){
            printf("Erro. O valor digitado não está no formato correto. \n");
            break; 
        }else{
            printf("Valor do Empréstimo Cadastrado! \n"); 
            break; 
        }while(1);
    }

    do{
        printf("Quantas Parcelas? "); 
        if (scanf("%d", &parcelas) != 1 || parcelas <= 0)
    }
}