```python
int aprovados 
int reprovados 
float valorParcela 
int meses 
char nomeCliente 
float salario 

loop de i < 10: 
    se i == 10
        imprima (aprovados, reprovados)
        FIM 
    se não: 
        imprima("Insira os dados do cliente")

        leia nomeCliente (char)
            se nomeCliente != char: 
                imprime "erro. Utilize apenas letras"
        
        leia salarioCliente (float)
            se salarioCliente != float 
                imprime "erro. Utilize apenas números"
        
        leia valorTotal (float)
            se valorTotal != (float)
                imprima "erro. Utilize números quebrados com ."

        leia meses(int)
            se meses != int 
                imprima "erro. Utilize apenas números inteiros"
        
        valorParcela = valorTotal / meses 
            imprime valorParcelas 

        20%salario = salarioCliente * 0,20 

        se 20%salario>valorParcela: 
            imprime "Aprovado"
                aprovado + 1 

        se não: imprime 
            imprime "Reprovado"
                reprovado + 1 

        
```python