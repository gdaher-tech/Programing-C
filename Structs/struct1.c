# include <stdio.h>


struct Pessoa{  
    char nome[50]; 
    int idade;
}; 


int main(){

    struct Pessoa p1; 

    printf("Digite o nome: \n"); 
    fgets(p1.nome, 50, stdin); 

    printf("Digite a idade: \n");
    scanf("%d", &p1.idade); 

    printf("Nome: %s", p1.nome); 
    printf("Idade: %d", p1.idade); 


}