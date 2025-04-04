# 📚 Tipos de Declarações em C

## ✅ 1. Variáveis Locais *(Ponto onde paramos)*
- Declaradas dentro de funções ou blocos.
- Escopo restrito ao bloco onde são criadas.
- Criadas na pilha e destruídas ao final da execução do bloco.

## 2. Variáveis Globais
- Declaradas fora de qualquer função.
- Visíveis em todo o arquivo (ou em múltiplos com `extern`).
- Criadas na área de dados e vivem durante toda a execução do programa.

## 3. Constantes (`const`)
- Valor fixo, não pode ser alterado após a declaração.
- Útil para valores que não devem ser modificados.

## 4. Ponteiros
- Armazenam o endereço de memória de outra variável.
- Declaração: `int *ptr;`

## 5. Arrays (Vetores)
- Conjuntos de variáveis do mesmo tipo.
- Declaração: `int numeros[5];`

## 6. Structs
- Agrupam diferentes tipos de dados sob um mesmo nome.
- Declaração: `struct Pessoa { char nome[50]; int idade; };`
