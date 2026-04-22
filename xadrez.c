#include <stdio.h>

int main() {
    printf("======Movimentos de peças de Xadrez Simples======\n\n"); // Título do programa


printf ("+++++++++++++++++++PRIMEIRA JOGADA CPU +++++++++++++++\n\n"); // Linha em branco para separar os movimentos do Peão 
    for (int i = 0; i < 1; i++) { // Peão move-se para frente 1 casa
        printf("Peão move-se para frente\n\n"); //Saida de exemplo para o Peão
    }


printf("=============== PRÓXIMA JOGADA  EU ===============\n\n"); // Linha em branco para separar os movimentos do Peão

    for (int i = 0; i < 5; i++) { // Torre move-se em linha reta 5 casas para frente
        printf("Torre move-se em linha reta 5 casas para frente\n\n"); // Saída de exemplo para a Torre
    }


    printf("=============== PRÓXIMA JOGADA CPU ===============\n\n"); // Linha em branco para separar os movimentos do Peão

    for (int i = 0; i < 3; i++) { // Cavalo move-se 3 casas para frente
    printf("Cavalo move-se 3 casas para frente\n"); // Saída de exemplo para o Cavalo 3 casas para frente  
    }
    printf("\n"); // Linha em branco para separar os movimentos do Cavalo
    for (int i = 0; i < 1; i++) { // Cavalo se move uma vez para o lado
   printf("Cavalo move-se 1 casa para o lado\n\n"); } 

printf("=============== PRÓXIMA JOGADA EU ===============\n\n"); // Linha em branco para separar os movimentos do Cavalo
  
for (int i = 0; i < 8; i++) { // Rainha move-se em linha reta 8 casas para frente
    printf("Rainha move-se em linha reta 8 casas para frente\n\n"); // Saída de exemplo para a Rainha

}
printf ("+++++++++++++++++++O REI ESTÁ EM PERIGO!++++++++++++++++++++\n\n"); // Linha em branco para separar os movimentos da Rainha

printf("=============== PRÓXIMA JOGADA CPU ===============\n\n"); // Linha em branco para separar os movimentos da Rainha

for (int i = 0; i < 1; i++) { // Rei move-se para o lado 1 casa
    printf("Rei move-se para o lado 1 casa\n\n"); // Saída de exemplo para o Rei
}
 printf("=============== PRÓXIMA JOGADA EU ===============\n\n"); // Linha em branco para separar os movimentos do Rei

for (int i = 0; i < 2; i++) { // Bispo move-se em diagonal 2 casas para frente e direita
    printf("Bispo move-se em diagonal 2 casas para frente e direita\n\n"); // Saída de exemplo para o Bispo
}

printf("XXXXXXXXXXXXXXXXXXXX CHEQUE-MATE! XXXXXXXXXXXXXXXXXXXX\n\n"); // Linha em branco para separar os movimentos do Bispo
return 0;
}
















