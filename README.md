# Notas-Organizadas
# Organizador de Pontuações

Programa em C que recebe as notas de 10 alunos, organiza os valores em ordem decrescente e os exibe com duas casas decimais.

## Como funciona

1. O programa lê 10 notas e as guarda no vetor `alunos`.
2. Chama `ordenarDecrescente(alunos, 10)` para ordenar o vetor.
3. Imprime as notas da maior para a menor.

A ordenação usa o algoritmo **Bubble Sort**: compara valores vizinhos e troca-os quando o valor da esquerda é menor. As passagens se repetem até que os valores estejam em ordem decrescente.

## Arquivos

- `Main.c`: lê as notas, chama a função de ordenação e exibe o resultado.
- `Bubble.h`: contém a função `ordenarDecrescente`.

## Exemplo

Para as notas `4, 5, 1, 5, 7, 6, 64, 34, 2, 4`, o resultado ordenado é:

```text
64.00
34.00
7.00
6.00
5.00
5.00
4.00
4.00
2.00
1.00
```

## Tecnologias

- Linguagem C
- Biblioteca padrão `stdio.h`
