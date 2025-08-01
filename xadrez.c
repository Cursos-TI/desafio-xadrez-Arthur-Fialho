#include <stdio.h>

// Desafio de Xadrez - MateCheck
//Nível Aventureiro

int main() {
    // Nível Novato - Movimentação das Peças
    // Variáveis para representar o número de casas que cada peça pode se mover.
    int bispoMov = 5;
    int torreMov = 5;
    int rainhaMov = 8;
    int cavaloMov = 2;
    int escolha;

    // Implementação de Movimentação do Bispo
    // Estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for(int i = 0; i < bispoMov; i++ ){
        printf("Bispo moveu para cima e direita\n");
    }

    printf("\nPróxima movimentação: \n");
    // Implementação de Movimentação da Torre
    // Estrutura de repetição para simular a movimentação da Torre para a direita.
    int i_torre = 0;
    do{
        printf("Torre moveu para direita\n");
        i_torre++;
    }while(i_torre < torreMov);

    printf("\nPróxima movimentação: \n");
    // Implementação de Movimentação da Rainha
    // Estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int i_rainha = 0;
    while(i_rainha < rainhaMov){
        printf("Rainha moveu para esquerda\n");
        i_rainha++;
    }

    printf("\nPróxima movimentação: \n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Escolha qual direção o cavalo ira se mover em L, 1-cima-esquerda, 2-cima-direita, 3-baixo-esquerda, 4-baixo-direita\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
        for(int i = 0; i < 1; i++){
            int j = 0;
            while(j < cavaloMov){
                printf("Cavalo moveu para cima\n");
                j++;
            }
            printf("Cavalo moveu para esquerda\n");
        }
        break;
        case 2:
        for(int i = 0; i < 1; i++){
            int j = 0;
            while(j < cavaloMov){
                printf("Cavalo moveu para cima\n");
                j++;
            }
            printf("Cavalo moveu para direita\n");
        }
        break;
        case 3:
        for(int i = 0; i < 1; i++){
            int j = 0;
            while(j < cavaloMov){
                printf("Cavalo moveu para baixo\n");
                j++;
            }
            printf("Cavalo moveu para esquerda\n");
        }
        break;
        case 4:
        for(int i = 0; i < 1; i++){
            int j = 0;
            while(j < cavaloMov){
                printf("Cavalo moveu para baixo\n");
                j++;
            }
            printf("Cavalo moveu para direita\n");
        }
        break;
        default:
        printf("Escolha invalida!\n");
        break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
