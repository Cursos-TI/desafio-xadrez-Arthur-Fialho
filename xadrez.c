#include <stdio.h>

// Desafio de Xadrez - MateCheck
//Nível Mestre

// Implementação de Movimentação da Torre recursiva
void moveTorre(int n){
    if(n > 0){
        printf("Torre moveu para a Direita\n");
        moveTorre(n -1);
    }
}

// Implementação de Movimentação da Rainha recursiva
void moveRainha(int n){
    if(n >0){
        printf("Rainha moveu para esquerda\n");
        moveRainha(n -1);
    }
}

// Implementação de Movimentação do Bispo recursiva e com loops aninhados
void moveBispo(int n){
    if (n > 0){
        for(int i = 0; i < 1; i++){
            printf("Bispo moveu para cima\n");
            for(int j = 0; j < 1; j++){
                printf("Bispo moveu para a direita\n");
            }
        }
        moveBispo(n - 1);
    }
}

int main() {
    // Variáveis para representar o número de casas que cada peça pode se mover.
    int bispoMov = 5;
    int torreMov = 5;
    int rainhaMov = 8;
    int cavaloMov = 2;
    int escolha;

    // Chamada da estrutura de repetição para simular a movimentação do Bispo em diagonal.
    moveBispo(bispoMov);

    printf("\nPróxima movimentação: \n");
    // Chamada da estrutura de repetição para simular a movimentação da Torre para a direita.
    moveTorre(torreMov);

    printf("\nPróxima movimentação: \n");
    // Chamada da estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    moveRainha(rainhaMov);

    printf("\nPróxima movimentação: \n");
    //Solicita ao jogador a direção da movimentatação do cavalo e a executa
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

    return 0;
}
