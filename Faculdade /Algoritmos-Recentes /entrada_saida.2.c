#include<stdio.h>

float salario_funcionario; 

float novo_salario(float salario_funcionario, float valor_aumento){
    return salario_funcionario + valor_aumento;
}

float valor_aumento(float salario_funcionario){
   return salario_funcionario * 0.20;
}

int main(){

    do{
        printf("Insira o valor do funcionário: Use apenas números ex(1800) \n"); 

        if (scanf("%f", &salario_funcionario) != 1){           
            printf("Valor digitado esta incorrero! Use apenas números. \n");

        }else{
            break; 
        }
    }while(1); 

    float aumento = valor_aumento(salario_funcionario); 

    printf("Salário com 20%% de aumento: %.2f", novo_salario(salario_funcionario, aumento));

}