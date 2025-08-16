#include <stdio.h>

// ---------------- FUNÇÃO RECURSIVA DA TORRE ----------------
// Torre anda em linha reta. Aqui: 5 casas para a direita.
void moverTorre(int casas) {
    if (casas == 0) return;   // caso base: sem mais casas
    printf("Direita\n");
    moverTorre(casas - 1);    // chamada recursiva
}

// ---------------- FUNÇÃO RECURSIVA DO BISPO ----------------
// Bispo anda na diagonal (cima + direita).
// Aqui: 5 casas, usando recursão e loops aninhados.
void moverBispo(int casas) {
    if (casas == 0) return;   // caso base
    // Loop aninhado → externo controla "Cima", interno "Direita"
    for (int i = 0; i < 1; i++) {  // movimento vertical
        for (int j = 0; j < 1; j++) {  // movimento horizontal
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas - 1);   // chamada recursiva
}

// ---------------- FUNÇÃO RECURSIVA DA RAINHA ----------------
// Rainha anda em qualquer direção. Aqui: 8 casas para a esquerda.
void moverRainha(int casas) {
    if (casas == 0) return;   // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1);   // chamada recursiva
}

// ---------------- MOVIMENTO COMPLEXO DO CAVALO ----------------
// Cavalo anda em "L": duas casas para cima + uma para a direita.
// Aqui usamos loops aninhados com múltiplas variáveis e condições.
void moverCavalo() {
    int movVertical = 2;  // duas casas para cima
    int movHorizontal = 1; // uma casa para a direita

    for (int i = 1, j = 0; i <= movVertical || j < movHorizontal; i++) {
        if (i <= movVertical) {
            printf("Cima\n");
        }

        // Quando o cavalo terminar o movimento vertical
        // faz o horizontal com controle especial
        if (i == movVertical) {
            while (j < movHorizontal) {
                j++;
                if (j > movHorizontal) continue; // segurança
                printf("Direita\n");
                break; // garante só uma repetição
            }
        }
    }
}

// ---------------- FUNÇÃO PRINCIPAL ----------------
int main() {
    // Quantidade de casas para cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(movimentoBispo);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
