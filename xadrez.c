#include <stdio.h>

//Desafio de xadrez iniciante
//Movimentação de peças
//Todas as solicitações do modo iniciante foram atendidas

int main(){
    int i = 1;

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

    return 0;
}