#include <stdio.h>

int main() {
    int pedidos;
    float valor_conta = 0;
    float precos[] = {0, 7.20, 5.20, 6.50, 6.30, 5.00, 8.30};
    char *itens[] = {"", "Hamburguer", "Cachorro Quente", "Bauru com Ovo", "Bauru Simples", "Refrigerante", "Cheese Burguer"};
    
    while (1) {
        printf("Digite o número correspondente: \n");
        printf("1 - Hamburguer (R$7.20)\n2 - Cachorro Quente (R$5.20)\n3 - Bauru com Ovo (R$6.50)\n4 - Bauru Simples (R$6.30)\n5 - Refrigerante (R$5.00)\n6 - Cheese Burguer (R$8.30)\n0 - Encerrar pedidos\n");
        scanf("%d", &pedidos);
        
        if (pedidos == 0) {
            printf("Pedidos encerrados. Sua conta ficou no valor de R$: %.2f\n", valor_conta);
            break;
        }
        
        if (pedidos >= 1 && pedidos <= 6) {
            printf("Você adicionou um %s a sua conta!\n", itens[pedidos]);
            valor_conta += precos[pedidos];
        } else {
            printf("Opção inválida, tente novamente!\n");
            continue;
        }
        
        int continuar;
        printf("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal: ");
        scanf("%d", &continuar);
        
        if (continuar == 0) {
            printf("Pedidos encerrados. Sua conta ficou no valor de R$: %.2f\n", valor_conta);
            break;
        }
    }
    
    return 0;
}
