#ifndef BUBBLE_H
#define BUBBLE_H

void ordenarDecrescente(float alunos[], int quantidade) {
    int i, j;
    float temp;

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

#endif
