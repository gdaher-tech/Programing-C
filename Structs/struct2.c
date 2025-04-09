#include <stdio.h> 

struct Produto{
    char nome[50]; 
    float preco; 
}; 


int main(){
    
    struct Produto lista[3];

    for (int i = 0; i < 3; i++){

        printf("Produto %d \n", i+1);
        
    }   
}