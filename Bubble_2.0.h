// Definindo a funçãoa

#ifndef BUBBLE_H
#define BUBBLE_H

//  Criando a função "ordenarDecrescente", definindo o tipo de dado para "alunos" e "quantidade", além de i, j e temp

void ordenarDecrescente(float alunos[], int quantidade) {
    int i, j;
    float temp;

// Função báse do código para ser implementado no Main.c

    for (i = 0; i < quantidade - 1; i++) {
        for (j = 0; j < quantidade - i - 1; j++) {
            if (alunos[j] < alunos[j + 1]) {
                temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

// Fechar o campo denomidado para está função

#endif
