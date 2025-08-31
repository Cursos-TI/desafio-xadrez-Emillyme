#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverTorre(int casas)
{
    if (casas == 0)
        return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

void moverRainha(int casas)
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas)
{
    if (casas == 0)
        return;
    for (int i = 0; i < 1; i++)
    {
        printf("Cima");
        for (int j = 0; j < 1; j++)
        {
            printf(", Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverCavalo()
{
    int casasCima = 2;
    int casasDireita = 1;

    for (int i = 1, j = 0; i <= casasCima; i++, j++)
    {
        if (j < 0)
            continue;
        printf("Cima\n");
        if (i == casasCima)
        {
            for (int k = 1; k <= casasDireita; k++)
            {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main()
{
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int casasRainha = 8;
    int casasTorre = 5;
    int casasBispo = 5;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
