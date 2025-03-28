#include <stdio.h>

void preencherVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int vetor[5];

    preencherVetor(vetor, 5);

    printf("Os valores do vetor são: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n"); // nova linha pra deixar bonito
    return 0;
}
