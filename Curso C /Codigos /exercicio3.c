// 3 - Leia um número e imprima o resultado do quadrado deste número


#include <stdio.h>

int main(){

  float numero;

  printf("Insira um número: ");
  scanf("%f", &numero);

  float numero_ao_quadrado = numero * numero;

  printf("O número ao quadrado é = %.2f", numero_ao_quadrado);


}



