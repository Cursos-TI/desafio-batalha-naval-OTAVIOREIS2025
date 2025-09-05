#include <cstdio>

int main() {
    const int TAM = 10;
    int tabuleiro[TAM][TAM] = {0}; // inicializa com zeros

    // Navio horizontal (linha 5, colunas C-E)
    for (int j = 2; j < 5; j++) {
        tabuleiro[4][j] = 3;
    }

    // Navio vertical (coluna G, linhas 3-5)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][6] = 3;
    }

    // Coordenadas navio horizontal
    printf("Coordenadas do navio horizontal (3 posições):\n");
    for (int j = 2; j < 5; j++) {
        printf("(Linha %d, Coluna %c)\n", 5, 'A' + j);
    }

   