#include <stdio.h>

//Desafio de xadrez intermediário
//Movimentação de peças

int main(){
    int i = 1;
    int j;

    //do-while para mover a torre
    do{
        printf("Torre: Direita\n");
        i++;
    } while (i <= 5);

    i = 1;
    //while para mover o bispo
    while (i <= 5){
        printf("Bispo: Cima - Direita\n");
        i++;
    }

    //for para mover a rainha
    for (i = 1; i <= 8; i++){
        printf("Rainha: Esquerda\n");
    }

    //Loops aninhados para mover o cavalo
    //Definindo valores para as variáveis e dois for para a movimentação
    i = 1;
    j = 1;
    for (i; i < 2; i++){
        for (j; j <= 2; j++){
                printf("Cavalo: cima\n");
        }
        printf("Cavalo: esquerda\n");
    }

    return 0;
}