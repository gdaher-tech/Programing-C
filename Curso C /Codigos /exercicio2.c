#include <stdio.h>


// 2 - Peça ao usuário para inserir 3 números inteiros e imprima a soma deles


int main(){

  int numero1, numero2, numero3;


  printf("Insira um número inteiro: ");
  scanf("%d", &numero1);

  printf("Insira outro número inteiro: ");
  scanf("%d", &numero2);

  printf("Insira mais um número inteiro: ");
  scanf("%d", &numero3);

  int soma_numeros  = numero1 + numero2 + numero3;

  printf("A soma dos números inteiros informados é = %d", soma_numeros);





}