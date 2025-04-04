
#include <stdio.h>


int main(){ 

    int minha_idade = 21; // Criando uma variável inteira com nome minha_idade e que contém o valor 21. 
    int* ptr = &minha_idade; // criando um ponteiro com o nome ptr, que está apontado ao endereço da variável minha_idade 
    
    // output the value of minha_idade
    printf("%d\n", minha_idade); 

    // output the memory adress of minha_idade
    printf("%p\n", &minha_idade); 

    // output the memory adress of minha_idade with the pointer
    printf("%p\n", ptr); 

    // RESUMO: Criei um ponteiro do tipo int chamado ptr, este ponteiro esta apontado para a variável minha_idade. O tipo do ponteiro deve 
    // corresponder ao tipo da varíavel. Usei o operador & para que o ponteiro detenha o valor alocado na memória. 

    printf("-------------------------------------------------- \n"); 


    // DESREFERENCIA
    // Você também pode obter o valor da variável para a qual o ponteiro aponta, usando o operador * (o operador de dereferência):

    int myage2 = 27; // criei a variável 
    int* ptr_2 = &myage2; // criei um ponteiro do mesmo tipo da variável, que aponta para o endereco de myage2. 

    // Output the memory adress of myage2 with my pointer ptr_2
    printf("%p\n", ptr_2); 

    // Output the value of myage2 with my pointer ptr_2
    printf("%d\n", *ptr_2);

    printf("--------------------- \n"); 

  // Iniciando ponteiro e variável   
  int x = 10; 
  int *ptr_3; 

  printf("%p\n", &ptr_3); // imprimindo endereco do ponteiro

  ptr_3 = &x; 

  printf("%p\n", &ptr_3);
  printf("%p\n", &x);


}



