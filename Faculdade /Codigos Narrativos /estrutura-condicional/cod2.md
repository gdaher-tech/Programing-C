```python

char nome
float salario
float valor_emprestimo
int meses
float parcela

nome = leia("Digite o seu nome: ")

loop (enquanto salario <= 0 ou tipo(salario) != float)
    salario = leia("Digite o seu salário: ")
    se tipo(salario) != float
        imprima("Erro: O salário deve ser um número válido.")
    se salario <= 0
        imprima("Erro: O salário deve ser maior que zero.")

loop (enquanto valor_emprestimo <= 0 ou tipo(valor_emprestimo) != float)
    valor_emprestimo = leia("Digite o valor do empréstimo desejado: ")
    se tipo(valor_emprestimo) != float
        imprima("Erro: O valor do empréstimo deve ser um número válido.")
    se valor_emprestimo <= 0
        imprima("Erro: O valor do empréstimo deve ser maior que zero.")

loop (enquanto meses <= 0 ou tipo(meses) != int)
    meses = leia("Digite o número de meses para quitação: ")
    se tipo(meses) != int
        imprima("Erro: O número de meses deve ser um número inteiro válido.")
    se meses <= 0
        imprima("Erro: O número de meses deve ser maior que zero.")

parcela = valor_emprestimo / meses

se parcela > (salario * 0,2)
    imprima("Empréstimo reprovado")
senao
    imprima("Empréstimo aprovado")

```