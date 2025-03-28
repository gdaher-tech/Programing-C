///2. Soma de dois números com ponteiros
/// Crie uma função soma que recebe dois ponteiros para int, realiza a soma e armazena o resultado em um terceiro ponteiro passado como parâmetro.
///Exemplo: soma(&a, &b, &resultado);

#include <stdio.h>

void soma(int *num1, int *num2, int *resultado){
    *resultado = *num1 + *num2; 
}


int main(){

    int num1 = 15; 
    int num2 = 20; 
    int resultado;  

    soma(&num1, &num2, &resultado); 

    printf("A soma entre %d e %d é = %d ", num1, num2, resultado); 


}