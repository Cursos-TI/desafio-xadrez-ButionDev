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


//O loop de fora movimenta o bispo para a esquerda, e o interno, movimenta para direita.
//O primeiro loop imprime e passa para o loop interno, que só vai imprimir se "n" == "m".
//Ele executa o externo, e passa pro interno, dai decrementa "m" e não deixa o interno se repetir.
//Após o loop interno não conseguir ser executado ele recomeça o externo com n - 1.
void moverbispo (int n, int m){
    for (n; n > 0; n--){
       printf("Bispo: cima - ");
       for (m; m == n; m--){
            printf("Direita\n");
       }
    }
}

int main(){
    //loop simples para mover a torre
    movertorre(5);
    printf("\n");

    //tambem um loop simples para a raínha
    moverrainha(8);
    printf("\n");

    //alem do loop, tem um operador ternário verificar "n" e movimentar o cavalo
    movercavalo(3);
    printf("\n");

    //Função para mover o bispo usando um loop aninhado um pouco complexo
    moverbispo(7, 7);

    return 0;
}