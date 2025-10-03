#include <stdio.h>

// Torre com recursividade
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Torre moveu %d casa(s)\n", atual);
    moverTorre(casas, atual + 1);
}

// Bispo com recursividade
void moverBispo(int casas, int atual) {
    if (atual > casas) return;
    printf("Bispo moveu %d casa(s) na diagonal\n", atual);
    moverBispo(casas, atual + 1);
}

// Rainha com recursividade
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Rainha moveu %d casa(s)\n", atual);
    moverRainha(casas, atual + 1);
}

// Cavalo com loops aninhados
void moverCavalo(int max) {
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max; j++) {
            if (i == j) continue;  // só pra mostrar o uso do continue
            if (i + j > max + 1) break;  // exemplo de break
            printf("Cavalo moveu em L: (%d, %d)\n", i, j);
        }
    }
}

int main() {
    printf("\n--- Torre ---\n");
    moverTorre(5, 1);

    printf("\n--- Bispo ---\n");
    moverBispo(5, 1);

    printf("\n--- Rainha ---\n");
    moverRainha(8, 1);

    printf("\n--- Cavalo ---\n");
    moverCavalo(3);

    return 0;
}