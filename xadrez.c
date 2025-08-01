#include <stdio.h>

// Desafio de Xadrez - MateCheck
//Nível Novato

int main() {
    // Nível Novato - Movimentação das Peças
    // Variáveis para representar o número de casas que cada peça pode se mover.
    int bispoMov = 5;
    int torreMov = 5;
    int rainhaMov = 8;

    // Implementação de Movimentação do Bispo
    // Estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for(int i = 0; i < bispoMov; i++ ){
        printf("Bispo moveu para cima e direita\n");
    }

    printf("\nPróxima movimentação: \n");
    // Implementação de Movimentação da Torre
    // Estrutura de repetição para simular a movimentação da Torre para a direita.
    int i = 0;
    do{
        printf("Torre moveu para direita\n");
        i++;
    }while(i < torreMov);

    printf("\nPróxima movimentação: \n");
    // Implementação de Movimentação da Rainha
    // Estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    i = 0;
    while(i < rainhaMov){
        printf("Rainha moveu para esquerda\n");
        i++;
    };

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
