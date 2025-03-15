# include <stdio.h>

float limite_parcela(float salario){
    return salario*0.20;
}

int main(){
    float salario, parcela, resultado;  

    printf("Digite o Salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o valor da parcela: ");
    scanf("%f",  &parcela);

    resultado = limite_parcela(salario);

    if (parcela  > limite_parcela(salario))

        printf("Empréstimo Reprovado! A parcela do empréstimo é maior que      20%% do salário. \n 20%% Salário é %.2f",resultado);

    else
        printf("Empréstimo Aprovado! \n");
    

    return 0; 
}