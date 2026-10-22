// Incluindo bibliotecas 

#include <stdio.h>
#include "Bubble.h"

// Iniciando o código principal incluidndo o cabeçalho da função de ordenação

int main(void) {
    float alunos[10] = {0};
    int i;

// Definindo um ponto guiado para o usúario fornecer as informações necessárias

    printf("///Organizador de pontuações///\n");

// Coletando as notas para cada aluno as guardando no espaço da memória

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do %d° aluno: ", i + 1);
        scanf("%f", &alunos[i]);
    }

printf("\n///Notas recebidas///\n");
printf("As notas recebidas foram:\n");
for(i = 0; i < 10; i++) {
    printf("Aluno %d: %.2f\n", i + 1, alunos[i]);
}


// Chamando minha função criada no Bubble.h

    ordenarDecrescente(alunos, 10);

// Saída das notas ordenadas, separadas pelas porntuações dos alunos

    printf("\n///Notas recebidas organizadas em ordem decrescente///\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", alunos[i]);
    }

    return 0;
}
