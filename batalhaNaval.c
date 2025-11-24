#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna = 1;
    int tabuleiro[10][10];

    // Preencher o tabuleiro com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Imprimir as letras linha
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
    }
    printf("\n");

    // Imprimir tabuleiro com coluna
    for (int i = 0; i < 10; i++) {
        printf("%2d ", coluna);
        coluna++;
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
