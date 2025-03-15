#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    int aprovados = 0, reprovados = 0;
    float valorParcela, valorTotal, salarioCliente;
    int meses;
    char nomeCliente[50];

    for (int i = 0; i < 10; i++) {
        printf("Insira os dados do cliente\n");

        printf("Nome: ");
        scanf("%s", nomeCliente);
        for (int j = 0; j < strlen(nomeCliente); j++) {
            if (!isalpha(nomeCliente[j])) {
                printf("Erro. Utilize apenas letras\n");
                return 1;
            }
        }

        printf("Salário: ");
        if (scanf("%f", &salarioCliente) != 1) {
            printf("Erro. Utilize apenas números\n");
            return 1;
        }

        printf("Valor total do empréstimo: ");
        if (scanf("%f", &valorTotal) != 1) {
            printf("Erro. Utilize números quebrados com .\n");
            return 1;
        }

        printf("Número de meses: ");
        if (scanf("%d", &meses) != 1) {
            printf("Erro. Utilize apenas números inteiros\n");
            return 1;
        }

        valorParcela = valorTotal / meses;
        printf("Valor da parcela: %.2f\n", valorParcela);

        float limite = salarioCliente * 0.20;

        if (limite > valorParcela) {
            printf("Aprovado\n");
            aprovados++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }
    }

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
