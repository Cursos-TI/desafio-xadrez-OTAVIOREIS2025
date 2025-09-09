#include <cstdio>

int main() {
    // ============================
    // CONSTANTES DO DESAFIO
    // ============================
    const int BISPO_PASSOS = 5;   // Bispo se move 5 casas
    const int TORRE_PASSOS = 5;   // Torre se move 5 casas
    const int RAINHA_PASSOS = 8;  // Rainha se move 8 casas

    const int N = 8; // Tamanho do tabuleiro 8x8
    char tabuleiro[N][N];

    // ============================
    // INICIALIZA TABULEIRO
    // ============================
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = '.'; // vazio
        }
    }

    // ============================
    // POSIÇÕES INICIAIS
    // ============================
    int bispoX = 7, bispoY = 0;   // Bispo começa em baixo à esquerda
    int torreX = 0, torreY = 0;   // Torre começa no canto superior esquerdo
    int rainhaX = 3, rainhaY = 7; // Rainha começa no meio da direita

    // ============================
    // MOVIMENTAÇÃO DO BISPO
    // ============================
    printf("Movimentacao do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < BISPO_PASSOS; i++) {
        if (bispoX > 0 && bispoY < N - 1) { // dentro do tabuleiro
            bispoX--;  // sobe
            bispoY++;  // direita
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("\n");

    // ============================
    // MOVIMENTAÇÃO DA TORRE
    // ============================
    printf("Movimentacao da Torre (5 casas para a direita):\n");
    int j = 0;
    while (j < TORRE_PASSOS && torreY < N - 1) {
        torreY++; // move para a direita
        printf("Direita\n");
        j++;
    }
    printf("\n");

    // ============================
    // MOVIMENTAÇÃO DA RAINHA
    // ============================
    printf("Movimentacao da Rainha (8 casas para a esquerda):\n");
    int k = 0;
    do {
        if (rainhaY > 0) { // move dentro do tabuleiro
            rainhaY--;
            printf("Esquerda\n");
        }
        k++;
    } while (k < RAINHA_PASSOS && rainhaY > 0);

    printf("\n");