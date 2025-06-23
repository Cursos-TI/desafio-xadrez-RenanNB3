#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação da Torre:
    int movimentoTorre = 5;
    printf("\n");
    printf("### Movimentos da Torre ###\n");
    for(int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo:
    int movimentoBispo = 5;
    int Bispo = 1;
    printf("\n");
    printf("### Movimentos do Bispo ###\n");
    
    while (Bispo <= movimentoBispo)
    {
        printf("Diagonal superior direita\n");
        Bispo ++;
    }

    // Implementação de Movimentação da Rainha:
    int movimentoRainha = 8;
    int Rainha = 1;
    printf("\n");
    printf("### Movimentos da Rinha ###\n");

    do
    {
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <= movimentoRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    int movimentoCavalo = 2;
    printf("### Movimentos do Cavalo ###\n");
    for (int i = 0; i < movimentoCavalo; i++)
    {
        int movimento1 = 0;
        while (movimento1 < 2)
        {
           printf("Baixo\n");
           movimento1++;
        }
        
        int movimento2 = 0;
        do
        {
            printf("Esquerda\n");
            movimento2++;

        } while (movimento2 < 1);
        printf("\n");    
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
