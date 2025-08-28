#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int mbispo = 5;
    int mtorre = 5;
    int mrainha = 8;
    int mcavalob = 2;
    int mcavaloe = 1;
    int i;

    // BISPO 
    // Movimenta 5 casas na diagonal (cima + direita) usando WHILE

    printf ("\nMovimento do Bispo: \n");
    i = 1;
    while (i <= mbispo)
    {
        printf ("Cima Direita \n");
        i++;
    }

    // TORRE 
    // Movimenta 5 casas para cima usando FOR

    printf ("\nMovimento da Torre: \n");
    for (i = 1;i <= mtorre;i++) {printf("Cima \n");}

    // Rainha
    // Movimenta 8 casas para a esquerda usando DO-WHILE
    
    printf ("\nMovimento da Rainha: \n");
    i = 1;
    do
    {
        printf ("Esquerda \n");
        i++;
    } while (i <= mrainha);
    
    // Movimentação do Cavalo

    printf ("\nMovimento do Cavalo:\n");
    for (i = 1; i <= mcavaloe; i++)
    {
        int j = 1;
        while (j <= mcavalob)
        {
            printf ("Baixo \n");
            j++;
        }
        printf ("Esquerda \n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
