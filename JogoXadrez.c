#include <stdio.h>

// Definição das constantes para os movimentos das peças
#define TORRE_MOV 5
#define BISPO_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV1 2  // Duas casas para cima
#define CAVALO_MOV2 1  // Uma casa para a direita

// Função recursiva para movimentação da Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Função recursiva para movimentação do Bispo
void moverBispoRecursivo(int movimentos) {
    if (movimentos == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(movimentos - 1);
}

// Função para movimentação do Bispo usando loops aninhados
void moverBispoLoop(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) { // Apenas um passo horizontal para cada passo vertical
            printf("Cima, Direita\n");
        }
    }
}

// Função para movimentação do Cavalo usando loops aninhados e controle de fluxo
void moverCavalo() {
    for (int i = 0; i < CAVALO_MOV1; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < CAVALO_MOV2; j++) {
        printf("Direita\n");
    }
}

int main() {
    // Movimentação da Torre (Recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_MOV);
    printf("\n");

    // Movimentação do Bispo (Recursividade e Loops Aninhados)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(BISPO_MOV);
    printf("\n");
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(BISPO_MOV);
    printf("\n");

    // Movimentação da Rainha (Recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(RAINHA_MOV);
    printf("\n");

    // Movimentação do Cavalo (Loops aninhados e controle de fluxo)
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}