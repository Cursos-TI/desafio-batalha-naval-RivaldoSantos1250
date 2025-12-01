#include <stdio.h>
#define LINHA 10
#define COLUNA 10
int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna1 = 1;
    int tabuleiro[LINHA][COLUNA];

    // Preencher o tabuleiro com zeros
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Imprimir as letras (linha)
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
    }
    printf("\n");

    // Colocar navio na horizontal
    /* for (int j = 4; j <= 6; j++) {  
            tabuleiro[2][j] = 3;
        }

        // Colocar navio na vertical
        for (int i = 4; i <= 6; i++) {  
            tabuleiro[i][7] = 3;
        }

        // Colocar navio diagonal principal
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j && i > 0 && i <= 3) {
                    tabuleiro[i][j] = 3;
                }
            }
        }

        // Colocar navio diagonal secundária
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i + j == 9 && i >= 4 && i <= 6) {
                    tabuleiro[i][j] = 3;
                }
            }
        } */

    // Colocar habilidade cone
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (i == 0 && j == 2) {
                tabuleiro[i][j] = 3;
            } else if (i == 1 && j >= 1 && j <= 3) {
                tabuleiro[i][j] = 3;
            } else if (i == 2 && j >= 0 && j <= 4) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Colocar habilidade cruz 
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (i == 6 && j >= 1 && j <= 5) {
                tabuleiro[i][j] = 3;
            } else if (i >= 5 && i <= 7 && j == 3) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Colocar habilidade octaedro 
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (i == 2 && j >= 6 && j <= 8) {
                tabuleiro[i][j] = 3;
            } else if (i >= 1 && i <= 3 && j == 7) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Imprimir tabuleiro com números das colunas
    for (int i = 0; i < LINHA; i++) {
        printf("%d ", coluna1);
        coluna1++;
        for (int j = 0; j < COLUNA; j++) {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
