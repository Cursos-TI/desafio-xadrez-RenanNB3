#include <stdio.h>

void moverTorre(int passos);
void moverBispo(int verticais, int horizontais);
void moverRainha(int passos);
void moverCavalo(int movimentos);

int main() {
    // Nível Novato - Movimentação das Peças

    // Torre
    int movimentoTorre = 5;
    printf("\n### Movimentos da Torre ###\n");
    for(int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Bispo
    int movimentoBispo = 5;
    int Bispo = 1;
    printf("\n### Movimentos do Bispo (loop) ###\n");
    while (Bispo <= movimentoBispo) {
        printf("Diagonal superior direita\n");
        Bispo++;
    }

    // Rainha
    int movimentoRainha = 8;
    int Rainha = 1;
    printf("\n### Movimentos da Rainha (loop) ###\n");
    do {
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <= movimentoRainha);
    printf("\n");

    // Cavalo
    int movimentoCavalo = 2;
    printf("### Movimentos do Cavalo (loop) ###\n");
    for (int i = 0; i < movimentoCavalo; i++) {
        int movimento1 = 0;
        while (movimento1 < 2) {
            printf("Baixo\n");
            movimento1++;
        }
        int movimento2 = 0;
        do {
            printf("Esquerda\n");
            movimento2++;
        } while (movimento2 < 1);
        printf("\n");
    }

    // Nível Mestre
    printf("### Nível Mestre ###\n");
    movimentoTorre = 5;
    int movimentoBispoVertical = 2;
    int movimentoBispoHorizontal = 3;
    movimentoRainha = 8;
    movimentoCavalo = 2;

    printf("\n### Movimentos da Torre ###\n");
    moverTorre(movimentoTorre);

    printf("\n### Movimentos do Bispo ###\n");
    moverBispo(movimentoBispoVertical, movimentoBispoHorizontal);

    printf("\n### Movimentos da Rainha ###\n");
    moverRainha(movimentoRainha);

    printf("\n### Movimentos do Cavalo ###\n");
    moverCavalo(movimentoCavalo);

    return 0;
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverBispo(int verticais, int horizontais) {
    if (verticais == 0) return;
    for (int h = 0; h < horizontais; h++) {
        printf("Diagonal superior direita\n");
    }
    moverBispo(verticais - 1, horizontais);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int cima = 1; cima <= 2; cima++) {
            if (cima == 2) {
                printf("Cima\n");
                break;
            }
            printf("Cima\n");
        }

        for (int direita = 1; direita <= 1; direita++) {
            if (direita != 1) {
                continue;
            }
            printf("Direita\n");
        }

        printf("\n");
    }
}
