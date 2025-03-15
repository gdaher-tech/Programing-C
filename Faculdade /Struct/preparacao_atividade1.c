#include <stdio.h>

// Definindo a struct para armazenar o nome e as notas de um aluno
typedef struct {
    char nome[50];
    float av1[3];
    float av2[3];
    float nota_prova[2];
    float nota_final;
} Aluno;

int main() {
    Aluno alunos[10];
    int i, j;
    float soma_av1, soma_av2, soma_prova, media_av1, media_av2, media_prova;

    // Entrada de dados para calcular cada aluno
    for (i = 0; i < 10; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        getchar();  // Para consumir o caractere de nova linha
        fgets(alunos[i].nome, 50, stdin);

        soma_av1 = soma_av2 = soma_prova = 0;

        // Entrada das notas AV1
        for (j = 0; j < 3; j++) {
            printf("Digite a nota AV1 %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &alunos[i].av1[j]);
            soma_av1 += alunos[i].av1[j];
        }

        // Entrada das notas AV2
        for (j = 0; j < 3; j++) {
            printf("Digite a nota AV2 %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &alunos[i].av2[j]);
            soma_av2 += alunos[i].av2[j];
        }

        // Entrada das notas de prova
        for (j = 0; j < 2; j++) {
            printf("Digite a nota da prova %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &alunos[i].nota_prova[j]);
            soma_prova += alunos[i].nota_prova[j];
        }

        // Calculando as médias
        media_av1 = soma_av1 / 3;
        media_av2 = soma_av2 / 3;
        media_prova = soma_prova / 2;

        // Calculando a nota final do aluno
        alunos[i].nota_final = (media_av1 + media_av2 + media_prova) / 3;
    }

    // Exibindo os resultados
    printf("\nRelatório de Notas dos Alunos:\n");
    for (i = 0; i < 10; i++) {
        printf("\nAluno: %s", alunos[i].nome);
        printf("Média AV1: %.2f\n", (alunos[i].av1[0] + alunos[i].av1[1] + alunos[i].av1[2]) / 3);
        printf("Média AV2: %.2f\n", (alunos[i].av2[0] + alunos[i].av2[1] + alunos[i].av2[2]) / 3);
        printf("Média Prova: %.2f\n", (alunos[i].nota_prova[0] + alunos[i].nota_prova[1]) / 2);
        printf("Nota Final: %.2f\n", alunos[i].nota_final);
    }

    return 0;
}
