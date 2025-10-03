#include <stdio.h>

int main() {
    
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Torre moveu para a direita %d casa(s)\n", i);
    }

    
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Bispo moveu para cima e para a direita (%d,%d)\n", i, i);
        i++;
    }


    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int j = 1;
    do {
        printf("Rainha moveu para a esquerda %d casa(s)\n", j);
        j++;
    } while (j <= casasRainha);

    
    printf("\nMovimento do Cavalo (em L):\n");
    
    int movimentos[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    for (int k = 0; k < 8; k++) {
        printf("Cavalo moveu para (%d, %d)\n", movimentos[k][0], movimentos[k][1]);
    }

    return 0;
}