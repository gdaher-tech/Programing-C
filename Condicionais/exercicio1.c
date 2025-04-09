#include <stdio.h> 

int main(){ // Iniciando função principal

    /* 
    Leia três valores inteiros representando os lados de um triângulo e informe se ele é:
    Equilátero (todos iguais)
    Isósceles (dois iguais)
    Escaleno (todos diferentes) Também verifique se os lados formam um triângulo válido.
    */

    int lado1, lado2, lado3; // declarando as 3 variáveis que vão receber valores em breve. 

    // Captação de Dados 
    printf("A seguir informe os valores de cada um dos lados do Triângulo. \n"); // Mensagem de orientação ao usuário. 

    // Lado 1 
    printf("Lado 1: ");  // Indica o usuário a digitar o valor do lado 1. 
    scanf("%d", &lado1);// Lê o valor digitado e armazena na variável lado1. 

    // Lado 2
    printf("Lado 2: "); 
    scanf("%d", &lado2); 

    // Lado 3
    printf("Lado 3: "); 
    scanf("%d", &lado3);


    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        printf("De acordo com as medidas, este é um triângulo válido. \n2");

        if (lado1 == lado2 && lado2 == lado3){ // lado1 == lado2, lado3 == lado2, todos são iguais. 
            printf("Baseado nos valores de cada lado deste triângulo, podemos afirmar que trata-se de um triângulo Equilátero \n"); 
        }

        else if(lado1 == lado2  || lado2 == lado3 || lado3 == lado1){ // Usando || como ou. ı
            printf("Baseado nos valores de cada lado deste triângulo, podemos afirmar que trata-se de um triângulo Isósceles \n"); 
        }

        else if(lado1 != lado2 && lado2 != lado3){
            printf("Baseado nos valores de cada lado deste triângulo, podemos afirmar que trata-se de um triângulo Escaleno \n");
        }

    }else   {
        printf("Levando em conta as medidas passadas, não se trata de um triângulo válido."); 
    }

    /*
    Descrição do Programa: 
    Este programa lê 3 valores inteiros de seu usuário visando identificar se estes valores forma um triângulo valido ou não, 
    se sim ele mostra qual o tipo do Triângulo. 

    1. Verifica se o triângulo é valido (pela desigualdade triangular)
    2. Se for válido, classifica como; 
        - Equilátero: Todos os lados iguais
        - Isósceles: Dois lados iguais 
        - Escaleno: Três lados diferentes
    3. Se o Triângulo não for válido, ele imprime uma mensagem informando a invalidade. 

    */

}