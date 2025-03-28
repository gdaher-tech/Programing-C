---

---

--- 
### Uma função é um bloco de código que só é executado quando é chamado. 
<p> Você pode passar dados, conhecidos como parâmetros, em uma função. <p>
<p> As funcoes sao usadas para executar reutilizacao de codigos, executando tarefas importantes. Defina o código de uma funcao uma única vez e use-o diversas vezes</p> 
### O que é um **protótipo de função**?

Um **protótipo de função** em C é uma declaração de uma função que informa ao compilador o tipo de valor que a função retornará e os tipos de seus parâmetros, sem precisar fornecer a implementação completa (corpo) da função. O protótipo é geralmente colocado no início do código ou em um arquivo de cabeçalho (`.h`) para que o compilador saiba como a função deve ser usada.

```c
int soma(int a, int b); // Protótipo da função soma
```


### Função void 

Uma função **`void`** é uma função que não retorna nenhum valor. Em C, você utiliza `void` como tipo de retorno para funções que executam uma ação, mas não precisam devolver um valor ao programa chamador.

#### 1. Função `void` que imprime uma mensagem
```c
#include <stdio.h>

  

void saudacao(){ // Definicao da funcao do tipo void

    printf("Olá seja bem vindo ao meu programa"); // A funcao imprime uma mensagem ao usuário
}

  

**int** main(){

    saudacao(); // Chamando a funcao dentro do main.
    
}
```

#### 2. Função `void` que altera o valor de uma variável (passagem por referência)

```c
#include <stdio.h>


// Funcao void que altera o valor de uma variável

void alterar_valor(int *num){

    *num = 100;

}

  
int main(){

    int x = 50;

    printf("O núemro possui valor de %d\n", x);

    alterar_valor(&x);

    printf("Agora o número possui vslor de %d\n", x); 

}
```

#### 3. Função `void` que executa uma ação repetida (sem retorno)

```c
#include <stdio.h>

// Funcao que imprime numero de 1 a 5

void imprimirNumeros(){

    for(int i = 1; i <= 5; i++){

        printf("%d \n", i);

    }

}


int main(){

    imprimirNumeros(); // Chamado a funcao que imprime numeros de 1 a 5.

}
```

