#include <stdio.h>

int main() {
    printf("======Movimentos de peças de Xadrez Simples======\n\n"); // Título do programa

    printf("+++++++++++++++++++PRIMEIRA JOGADA CPU +++++++++++++++\n\n");
    for (int i = 0; i < 1; i++) { // Peão move-se para frente 1 casa
        printf("Peão move-se para frente\n\n");
    }

    printf("=============== PRÓXIMA JOGADA EU ===============\n\n");
    for (int i = 0; i < 5; i++) { // Torre move-se 5 casas para frente
        printf("Torre move-se em linha reta 5 casas para frente\n\n");
    }

    printf("=============== PRÓXIMA JOGADA CPU ===============\n\n");
    for (int i = 0; i < 3; i++) { // Cavalo move-se 3 casas para frente
        printf("Cavalo move-se 3 casas para frente\n");
    }
    printf("\n");
    for (int i = 0; i < 1; i++) { // Cavalo move-se 1 casa para o lado
        printf("Cavalo move-se 1 casa para o lado\n\n");
    }

    printf("=============== PRÓXIMA JOGADA EU ===============\n\n");
    for (int i = 0; i < 8; i++) { // Rainha move-se 8 casas para frente
        printf("Rainha move-se em linha reta 8 casas para frente\n\n");
    }

    printf("+++++++++++++++++++O REI ESTÁ EM PERIGO!++++++++++++++++++++\n\n");

    printf("=============== PRÓXIMA JOGADA CPU ===============\n\n");
    for (int i = 0; i < 1; i++) { // Rei move-se 1 casa para o lado
        printf("Rei move-se para o lado 1 casa\n\n");
    }

    printf("=============== PRÓXIMA JOGADA EU ===============\n\n");
    for (int i = 0; i < 2; i++) { // Bispo move-se 2 casas em diagonal
        printf("Bispo move-se em diagonal 2 casas para frente e direita\n\n");
    }

    printf("XXXXXXXXXXXXXXXXXXXX CHEQUE-MATE! XXXXXXXXXXXXXXXXXXXX\n\n");
    return 0;
}
