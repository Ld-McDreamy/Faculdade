#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vi = 100;
    float vf = 90.12;

    int *pvi = NULL;
    float *pvf = NULL;

    // Mostando o Endereço e Conteúdo da Váriavel:
    printf("\n O Endereco de Memoria para vi = %d", &vi);
    printf("\n O Conteudo para vi = %d \n", vi);

    // Conteúdo NULL:
    printf("\n O Conteudo para o Ponteiro pvi (ANTES) = %d", pvi);

    // PONTEIRO recebendo o Endereço de uma variável:
    pvi = &vi;

    // Apresentando o Endereço e o Conteúdo através de PONTEIRO:
    printf("\n O Conteudo para o Ponteiro pvi (DEPOIS) = %d \n", pvi);
    printf("\n Valor da Variavel Ponteiro pvi = %d \n", *pvi);

    // Alterando Valor do Conteúdo usando ponteiro:
    *pvi = 506;
    printf("\n Novo Valor da Variavel Ponteiro pvi = %d", *pvi);
    printf("\n Novo Conteudo para vi = %d \n", vi);

    return 0;
}
