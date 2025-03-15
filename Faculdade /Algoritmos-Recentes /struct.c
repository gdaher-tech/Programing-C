#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Exercício 
// Utilizando a estrutura abaixo, faça um programa para ler a matricula e as 3 notas e as 3 notas calculando a média de 10 alunos. 

struct Aluno {
    int matricula; 
    float nota[3]; 
    float media; 
}

int main(){
  
    struct Aluno alunos[10];
    printf("Digite a matrícula do Aluno: "); 
    scanf("%s",&alunos[0].matricula);
    for (int  i = 0; i < 3; i++)
    {
        printf("Insira a Nota %i:  ",i+1);
        scanf("%f", &alunos.nota[i]);
    }
    
}








