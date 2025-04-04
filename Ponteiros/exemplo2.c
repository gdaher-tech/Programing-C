#include <stdio.h>

int main(){

    // iniciar variável 
    float minha_altura = 1.81; 

    // iniciar minha variável 
    float *ponteiro; 

    // Linkando meu ponteiro com a minha variável 
    ponteiro = &minha_altura; 

    // Adress of minha_altura 
    printf("O endereço da minha variável é: %p\n", &minha_altura); 

    // Adress of ponteiro
    printf("O endereço do meu ponteiro é; %p\n", &ponteiro); 
    
    // Endereco para onde o ponteiro aponta 
    printf("O endereco que o meu ponteiro aponta é: %p\n", ponteiro); 


    // O valor de ponteiro é o endereço da variável que ele está linkado

}