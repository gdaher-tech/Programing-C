/* EXERCICIO 2 
Leia os três lados de um triângulo e, além de verificar se é válido e classificar quanto aos lados (equilátero, isósceles ou escaleno), 
classifique também quanto aos ângulos:

Triângulo Acutângulo: todos os ângulos < 90°
Triângulo Retângulo: um ângulo = 90°
Triângulo Obtusângulo: um ângulo > 90°

Teorema de Pitagoras Generalizado
- se a ao quadrado = b ao quadrado + c ao quadrado -> Retângulo
- se a ao quadrado < b ao quadrado + c ao quadrado -> Acutângulo 
- se a ao quadrado > b ao quadrado + c ao quadrado -> obtusângulo 
onde a é o maior lado. 

*/


# include <stdio.h> 

int main(){


    // Declaração de variáveis 
    int lado1, lado2, lado3; 
    int maior_lado; 


    // Leitura dos 3 lados 
    printf("Lado 1: \n");   // Lado 1
    scanf("%d", &lado1); 

    printf("Lado 2: \n");   // Lado 2 
    scanf("%d", &lado2); 

    printf("Lado 3: \n");   // Lado 3 
    scanf("%d", &lado3); 

    // Condicionais 

    // Condicional sobre validade do triângulo 
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){ // Condicional para verificar se o triângulo é válido

        printf("Trata-se de um Triângulo válido \n"); 

        // Condicionais de classificação quanto aos lados.
        if(lado1 == lado2 && lado2 == lado3 ) { // Equilátero (Todos os lados iguais)
            printf("Como todos os lados são iguais, este é um Triângulo EQUILÁTERO \n"); 
            printf("A classificação quanto ao ângulo é Acutângulo");
        }

        else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1) { // Isósceles (Dois lados iguais)
            printf("Como apenas 2 lados são iguais, trata-se de um Triângulo ISÓSCELES \n"); 
        } 

        else if(lado1 != lado2 && lado2 != lado3) { // Escaleno (Todos os lados Iguais)
            printf("Como todos os lados são diferentes, trata-se de um Triângulo ESCALENO \n"); 
        }

        // Condicionais para definir qual o maior lado. 
        if (lado1 > lado2 && lado1 > lado3){ // Verifica se o lado1 é o maior lado 

            // Classificando quanto ao âgulo, levando em consideração que é o lado1 é o maior lado 

            if(lado1 * lado1 == lado2 * lado2 + lado3 * lado3){
                printf("A classificação quanto ao ângulo é Retângulo");     // Retângulo
            }

            else if(lado1 * lado1 < lado2 * lado2 + lado3 * lado3 ){
                printf("A classificação quanto ao ângulo é Acutângulo");    // Acutângulo 
            }

            else if(lado1 * lado1 > lado2 * lado2 + lado3 * lado3){
                printf("A classificação quanto ao ângulo é Obtusângulo");   // Obtusângulo  
            }
        }

        else if(lado2 > lado1 && lado2 > lado3){ // Verifica se o lado2 é o maior lado 

            // Classificando quanto ao âgulo, levando em consideração que é o lado2 é o maior lado 

            if(lado2 * lado2 == lado1 * lado1 + lado3 * lado3){
                printf("A classificação quanto ao ângulo é Retângulo");     // Retângulo
            }

            else if(lado2 * lado2 < lado1 * lado1 + lado3 * lado3 ){
                printf("A classificação quanto ao ângulo é Acutângulo");    // Acutângulo 
            }

            else if(lado2 * lado2 > lado1 * lado1 + lado3 * lado3){
                printf("A classificação quanto ao ângulo é Obtusângulo");   // Obtusângulo  
            }

        }

        else if(lado3 > lado2 && lado3 > lado1){ // Verifica se o lado3 é o maior lado 

            // Classificando quanto ao âgulo, levando em consideração que é o lado3 é o maior lado 

            if(lado3 * lado3 == lado1 * lado1 + lado2 * lado2){
                printf("A classificação quanto ao ângulo é Retângulo");     // Retângulo
            }

            else if(lado3 * lado3 < lado1 * lado1 + lado2 * lado2 ){
                printf("A classificação quanto ao ângulo é Acutângulo");    // Acutângulo 
            }

            else if(lado3 * lado3 > lado2 * lado2 + lado1 * lado1){
                printf("A classificação quanto ao ângulo é Obtusângulo");   // Obtusângulo  
            }

        }

    }




}