#include <stdio.h>
#include <stdlib.h>

float av1, ap1, ap2, ap3, np;

float ap1_2, ap2_2, ap3_2, np_2;

float calculoap(float ap1, float ap2, float ap3) {
  return (ap1 + ap2 + ap3) / 3 * 0.3;
}

float calculonp(float np) { return np * 0.7; }

float calculoap2(float ap1_2, float ap2_2, float ap3_2) {
  return (ap1_2 + ap2_2 + ap3_2) / 3 * 0.3;
}

float calculonp2(float np_2) { return np_2 * 0.7; }

int main() {

  printf("Insira as notas a seguir usando . para notas com valores quebrados, "
         "por exemp; 5.2 ao invés de 5,2 \n");

  printf("Insira as notas da sua avaliação 1: \n");

  printf("Qual a nota da sua atividade prática 1? \n");
  scanf("%f", &ap1);

  printf("Qual a nota da sua atividade prática 2? \n");
  scanf("%f", &ap2);

  printf("Qual a nota da sua atividade prática 3? \n");
  scanf("%f", &ap3);

  printf("Qual a sua nota da prova? \n");
  scanf("%f", &np);

  float av1 = calculoap(ap1, ap2, ap3) + calculonp(np);

  printf("Sua nota final da avaliação 1 é: %.1f \n", av1);

  printf("Insira as notas da sua avaliação 2: \n");

  printf("Qual a nota da sua atividade prática 1? \n");
  scanf("%f", &ap1_2);

  printf("Qual a nota da sua atividade prática 2? \n");
  scanf("%f", &ap2_2);

  printf("Qual a nota da sua atividade prática 3? \n");
  scanf("%f", &ap3_2);

  printf("Qual a nota da sua prova? \n");
  scanf("%f", &np_2);

  float av2 = calculoap2(ap1_2, ap2_2, ap3_2) + calculonp2(np_2);

  printf("A sua nota final da avaliação 2 é: %.1f \n ", av2);

  printf("Somando a sua nota das Avalizações 1: %.1f \n", av1);

  float notafinal = (av2 + av1) / 2 ;

  printf("A sua nota final é: %.2f", notafinal);

  return 0;
}