// Peça ao usuário uma temperatura em Celsius (por exemplo: `25.5`).
// - Converta para Fahrenheit usando a fórmula: `F = (C * 9/5) + 32`.
// - Exiba o resultado com `printf`.

#include <stdio.h>

int main(){
  float temperatura;

  printf("Insira a temperatura em graus celsius: ");
  scanf("%f", &temperatura);

  float temperatura_convertida = temperatura * 9 / 5 + 32;

  printf("A temperatura convertida para Fahrenheit é: %f", temperatura_convertida);

}

