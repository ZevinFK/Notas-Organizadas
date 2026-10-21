// 

#include <stdio.h>
#include "Bubble.h"

int main(void) {
    float alunos[10] = {0};
    int i;

    printf("///Organizador de pontuações///\n");
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do %d° aluno: ", i + 1);
        scanf("%f", &alunos[i]);
    }

    ordenarDecrescente(alunos, 10);

    printf("///Notas recebidas organizadas em ordem decrescente///\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", alunos[i]);
    }

    return 0;
}
