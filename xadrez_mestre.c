#include <stdio.h>

void movertorre (int n){
    if (n > 0){
        printf("Torre: Direita\n");
        movertorre(n - 1);
    }
}

void moverrainha (int n){
    if (n > 0){
        printf("Rainha: Esquerda\n");
        moverrainha(n - 1);
    }
}

void movercavalo (int n){
    if (n > 0){
        n > 1 ? printf("Cavalo: Cima\n"): printf("Cavalo esquerda\n");
        movercavalo(n - 1);
    }
}

int main(){
    printf("***Desafio nível Mestre de xadrez***\n");

    //loop simples para mover a torre
    movertorre(5);
    printf("\n");
    //tambem um loop simples para a raínha
    moverrainha(8);
    printf("\n");
    //alem do loop, tem um operador ternário verificar "n" e movimentar o cavalo
    movercavalo(3);

    return 0;
}