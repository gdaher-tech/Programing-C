```python
float ap1, ap2, ap3, np, av1, ap1_2, ap2_2, ap3_2, np_2, av2, a1, a2, nf

loop (verdadeiro)
    ap1 = leia("Qual a nota para atividade prática 1? (0 a 10): ")
    se tipo(ap1) != float ou ap1 < 0 ou ap1 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

loop (verdadeiro)
    ap2 = leia("Qual a nota para atividade prática 2? (0 a 10): ")
    se tipo(ap2) != float ou ap2 < 0 ou ap2 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

loop (verdadeiro)
    ap3 = leia("Qual a nota para atividade prática 3? (0 a 10): ")
    se tipo(ap3) != float ou ap3 < 0 ou ap3 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

loop (verdadeiro)
    np = leia("Qual a nota da prova? (0 a 10): ")
    se tipo(np) != float ou np < 0 ou np > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

av1 = ((ap1 + ap2 + ap3) / 3) * 0,3 + (np * 0,7)

loop (verdadeiro)
    ap1_2 = leia("Qual a nova nota para atividade prática 1? (0 a 10): ")
    se tipo(ap1_2) != float ou ap1_2 < 0 ou ap1_2 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

loop (verdadeiro)
    ap2_2 = leia("Qual a nova nota para atividade prática 2? (0 a 10): ")
    se tipo(ap2_2) != float ou ap2_2 < 0 ou ap2_2 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

loop (verdadeiro)
    ap3_2 = leia("Qual a nova nota para atividade prática 3? (0 a 10): ")
    se tipo(ap3_2) != float ou ap3_2 < 0 ou ap3_2 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

loop (verdadeiro)
    np_2 = leia("Qual a nova nota da prova? (0 a 10): ")
    se tipo(np_2) != float ou np_2 < 0 ou np_2 > 10
        imprima("Erro: A nota deve ser um número entre 0 e 10.")
    senao
        pare

av2 = ((ap1_2 + ap2_2 + ap3_2) / 3) * 0,3 + (np_2 * 0,7)

a1 = av1
a2 = av2
nf = (a1 + a2) / 2

se nf >= 0 e nf <= 10
    imprima("Nota final: " + nf)
senao
    imprima("Erro: Nota final inválida.")

```python