# include <stdio.h>

char nome_cliente[50]; 
float salario_cliente; 
float valor_emprestimo; 
int quantidade_parcelas; 

float calculo_parcelas(float valor_emprestimo, int quantidade_parcelas){
  return valor_emprestimo / quantidade_parcelas; 
}

float porcentagem_salario(float salario_cliente){
  return salario_cliente * 0.20; 
}

int main(){

  printf("Digite o nome do cliente \n");
    scanf("%s", nome_cliente); 

  printf("Digite o salário do cliente \n"); 
    scanf("%f", &salario_cliente); 

  printf("Digite o valor do empréstimo: \n");
    scanf("%f", &valor_emprestimo);

  printf("Digite a quantidade de parcelas do empréstimo: \n"); 
  scanf("%d", &quantidade_parcelas); 


  printf("Valor da parecela: %.2f \n", calculo_parcelas( valor_emprestimo,  quantidade_parcelas));

  printf("20%% do salário é: %.2f \n", porcentagem_salario(salario_cliente));

if (calculo_parcelas(valor_emprestimo, quantidade_parcelas) > porcentagem_salario(salario_cliente)){
  printf("Empréstimo Reprovado"); 
}

else{
  printf("O emprésitmo de %s Empréstimo Aprovado", nome_cliente); 
}

  
}
  
