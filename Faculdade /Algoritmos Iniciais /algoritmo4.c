# include <stdio.h>

float salario; 
float valor_parcela; 

float calculo_autorizacao(float salario){ 
  return salario * 0.20;

  float autorizacao = calculo_autorizacao(salario);
}

int main(){

  printf("Digite o valor do seu salário: \n"); 
    scanf("%f", &salario);

  printf("Digite o valor da parcela: \n");
    scanf("%f", &valor_parcela);

  printf("O valor máximo que voce deve assumir como parcela é %.2f \n", calculo_autorizacao(salario)); 

if (valor_parcela > calculo_autorizacao(salario)){
  printf("O empréstimo foi reprovado");
  
} else{ 
  printf("Empréstimo aprovado!");
}
  
return 0; 
  
}
