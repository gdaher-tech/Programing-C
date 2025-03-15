#include <stdio.h>

float reais_value, quota_dolar; 

float conversion(float reais_value, float quota_dolar){
  return(reais_value / quota_dolar);
}



int main(){

  printf("Digite o valor em Reais (R$) que deseja converter \n");
  printf("Enter the amount in Reais (R$) you want to convert \n "); 
  scanf("%f", &reais_value);

  printf("Digite o valor da cotação do Dólar \n");
  printf("Enter the Dollar quote value \n ");
  scanf("%f", &quota_dolar); 

  printf("O valor da conversão é: %.2f\n", conversion(reais_value, quota_dolar));


  return 0; 


}
