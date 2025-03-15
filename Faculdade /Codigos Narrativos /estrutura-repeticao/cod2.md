```python 
int cachorro_quente 
int hamburguer 
int bauru_com_ovo 
int bauru_simples 
int refrigerante 
int cheese_burguer 
char pedidos 
float valor_conta 

lista de codigos{100 = 5,20 | 101 = 6,30 | 102 = 6,50 | 103 = 7,20 | 104 = 8,30 | 105 = 5,00}

valor_conta = soma dos itens adicionados a lista 


loop (enquanto o usuário não encerra os pedidos): 
    
    pedidos = leia("Digite o número correspondente: 1 - Hamburguer | 2 - Cachorro quente | 3 - Bauru com ovo | 4 - Bauru Simples | 5 - Refrigerante | 6 - Cheese Burguer | 0 - Encerrar pedidos")

    pedidos = int(pedidos)

    se pedidos == 0
        imprima("Pedidos encerrados, a sua conta ficou no valor de R$: valor_conta")

    se pedidos == 1 
        imprima("Você adicionou um Hamburguer a sua conta!")
        adiciona + 1 codigo 103 a lista

        leia("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal")
            se leitura == 1
                retorna o usuario ao loop principal 
            se leitura == 0 
                imprime float valor_conta
    
    se pedidos == 2 
        imprima("Você adicionou um Cachorro quente a sua conta!")
        adiciona + 1 codigo 100 a lista 

        leia("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal")
            se leitura == 1
                retorna o usuario ao loop principal 
            se leitura == 0 
                imprime float valor_conta

    se pedidos == 3 
        imprima("Você adicionou um Bauru com ovo a sua conta!")
        adiciona + 1 codigo 102 a lista

        leia("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal")
            se leitura == 1
                retorna o usuario ao loop principal 
            se leitura == 0 
                imprime float valor_conta

    se pedidos == 4
        imprima("Você adicionou um Bauru simples a sua conta!")
        adiciona + 1 codigo 101 a lista 

        leia("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal")
            se leitura == 1
                retorna o usuario ao loop principal 
            se leitura == 0 
                imprime float valor_conta

    se pedidos == 5
        imprima("Você adicionou um refrigerante a sua conta!")
        adiciona + 1 codigo 105 a lista 

        leia("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal")
            se leitura == 1
                retorna o usuario ao loop principal 
            se leitura == 0 
                imprime float valor_conta

    se pedidos == 6
        imprima("Você adicionou um Cheese Burguer a sua conta!")
        adiciona + 1 codigo 104 a lista 

        leia("Deseja pedir outro item? Digite 0 para encerrar pedido ou 1 para retornar ao menu principal")
            se leitura == 1
                retorna o usuario ao loop principal 
            se leitura == 0 
                imprime float valor_conta






```python