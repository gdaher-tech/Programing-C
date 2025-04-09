#include <stdio.h>
#include <string.h>

struct Aluno{

    char nome[50]; 
    int idade; 
    float altura; 
    char curso[50]; 
    
};

struct Professor{

    char nome[50]; 
    int idade; 
    float altura; 
    char curso[50];
    

};



int main(){

    struct Professor Jean;
    struct Aluno gustavo; 

    // gustavo.nome = "Gustavo Daher";
    strcpy(gustavo.nome,"Gustavo Daher"); 
    gustavo.idade = 21; 
    gustavo.altura = 1.82; 
    strcpy(gustavo.curso,"Engenharia de Software"); 

    printf("NOME: %s", gustavo.nome);
    printf("IDADE: %d",gustavo.idade);
    printf("ALTURA: %.2f",gustavo.altura);
    printf("CURSO: %s", gustavo.curso);


    printf("Insira o nome do professor: \n"); 
    scanf("%s", Jean.nome); 

    printf("O nome do professor é: %s", Jean.nome); 

}

