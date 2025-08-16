#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int movimentoTorre = 5;   // Torre: 5 casas para a direita
    int movimentoBispo = 5;   // Bispo: 5 casas na diagonal (cima + direita)
    int movimentoRainha = 8;  // Rainha: 8 casas para a esquerda

    // ---------------- MOVIMENTO DA TORRE ----------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---------------- MOVIMENTO DO BISPO ----------------
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // ---------------- MOVIMENTO DA RAINHA ----------------
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);
    printf("\n");

    // ---------------- MOVIMENTO DO CAVALO ----------------
    // O Cavalo anda em "L":
    // 2 casas em uma direção (aqui: para baixo)
    // + 1 casa perpendicular (aqui: para a esquerda)
    // Requisito: loops aninhados (for + while).
    printf("Movimento do Cavalo:\n");

    int passosBaixo = 2;     // quantidade de casas para baixo
    int passosEsquerda = 1;  // quantidade de casas para esquerda

    // Loop externo (for) → movimenta 2 casas para baixo
    for (int i = 1; i <= passosBaixo; i++) {
        printf("Baixo\n");

        // Quando o cavalo terminar o movimento "para baixo",
        // executa o loop interno (while) para a esquerda.
        if (i == passosBaixo) {
            int cont = 1;
            while (cont <= passosEsquerda) {
                printf("Esquerda\n");
                cont++;
            }
        }
    }

    return 0;
}
