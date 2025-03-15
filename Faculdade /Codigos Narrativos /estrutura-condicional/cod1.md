```python
float salario
float parcela

loop (enquanto salario <= 0 ou tipo(salario) != float)
    salario = leia("Digite o seu salário: ")
    se tipo(salario) != float
        imprima("Erro: O salário deve ser um número válido.")
    se salario <= 0
        imprima("Erro: O salário deve ser maior que zero.")

loop (enquanto parcela <= 0 ou tipo(parcela) != float)
    parcela = leia("Digite o valor da parcela do empréstimo: ")
    se tipo(parcela) != float
        imprima("Erro: O valor da parcela deve ser um número válido.")
    se parcela <= 0
        imprima("Erro: O valor da parcela deve ser maior que zero.")

se parcela > (salario * 0,2)
    imprima("Empréstimo reprovado")
senao
    imprima("Empréstimo aprovado")

```