#include <stdio.h>

// Função para calcular o aumento de 25%
float aumento(float salario) {
    return salario * 0.25; 
}

// Função para calcular o salário final com aumento
float salario_final(float salario) {
    return aumento(salario) + salario; 
}

int main() { 
    float salario_inicial;

    // Entrada do salário
    printf("Digite o valor do salário que deseja aplicar 25%% de aumento: \n");
    scanf("%f", &salario_inicial); 

    // Exibição do resultado
    printf("Valor do salário com o aumento de 25%%: %.3f\n", salario_final(salario_inicial));

    return 0;
}
