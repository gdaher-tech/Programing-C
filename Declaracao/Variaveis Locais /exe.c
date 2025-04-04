#include <stdio.h> 

void mostrarIdade(int idade){  // criando uma funcao sem retorno com o parametro idade do tipo inteiro 
    idade = 20;  // VARIÁVEL LOCAL - esta variavel nao pode ser acessada fora da funcao que foi declarada, a nao ser que seja delcarada no main
    printf("A idade é igual a %d", idade); // imprindo a variavel dentro da funcao 
}

void mostrarAltura(float altura){
    altura = 1.81;                  // Altura nao é mostrada ao usuário pois o seu valor só existe localmente na funcao mostrarAltura
    printf("O time é %f", altura); 
}

int main() {

    int idade; // declarando que a variavel idade existe, para que ela possa ser executada no main. 

    mostrarIdade(idade); // chamando a funcao mostrarIdade que possui o objetivo de imprimir a idade definida. 
    return 0; 

}
