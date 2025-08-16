#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int movimentoTorre = 5;   // Torre: 5 casas para a direita
    int movimentoBispo = 5;   // Bispo: 5 casas na diagonal (cima + direita)
    int movimentoRainha = 8;  // Rainha: 8 casas para a esquerda

    // ---------------- MOVIMENTO DA TORRE ----------------
    // A Torre anda em linha reta (horizontal ou vertical).
    // Aqui ela vai andar 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---------------- MOVIMENTO DO BISPO ----------------
    // O Bispo anda na diagonal.
    // Aqui ele vai andar 5 casas para cima e para a direita.
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // ---------------- MOVIMENTO DA RAINHA ----------------
    // A Rainha pode andar em todas as direções.
    // Aqui ela vai andar 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);
    printf("\n");

    return 0;
}
