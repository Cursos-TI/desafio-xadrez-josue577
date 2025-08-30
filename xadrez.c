#include <stdio.h>


void moverbispo(int casas){

for (int i = 0; i < casas; i++)
{
    printf ("cima ");
    for (int i = 0; i < 1; i++)
    {
        printf ("direita\n");
    }
    
}

}//fim do void moverbispo

void movertorre(int casas){

    for (int i = 1;i <= casas;i++) {printf("Cima \n");}

}//fim do movertorre

void moverrainha(int casas){

    int i = 1;
    do
    {
        printf ("Esquerda \n");
        i++;
    } while (i <= casas);

}//fim moverrainha

void movercavalo(int casas){

    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 1; i <= movimentosCima; i++) {
        printf("Cima\n");
        if (i >= 2) {
            for (int j = 1; j <= movimentosDireita; j++) {
                printf("Direita\n");
                break;
            }
        }
    }

}


int main()
{


    //movimento do bispo
    int mbispo = 5;
    printf ("\nMovimento do Bispo!!!\n");
    moverbispo(mbispo);

    //movimento torre
    int mtorre = 5;
    printf ("\nMovimento da Torre!!!\n");
    movertorre(mtorre);

    //movimento rainha
    int mrainha = 8;
    printf ("\nMovinto da Rainha!!!\n");
    moverrainha(mrainha);

    //movimento cavalo
    printf ("\nMovimento do Cavalo!!!\n");
    movercavalo(1);


return 0;
}