#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vi = 100;
    float vf = 90.12;

    int *pvi = NULL;
    float *pvf = NULL;

    // Mostando o Endere�o e Conte�do da V�riavel:
    printf("\n O Endereco de Memoria para vi = %d", &vi);
    printf("\n O Conteudo para vi = %d \n", vi);

    // Conte�do NULL:
    printf("\n O Conteudo para o Ponteiro pvi (ANTES) = %d", pvi);

    // PONTEIRO recebendo o Endere�o de uma vari�vel:
    pvi = &vi;

    // Apresentando o Endere�o e o Conte�do atrav�s de PONTEIRO:
    printf("\n O Conteudo para o Ponteiro pvi (DEPOIS) = %d \n", pvi);
    printf("\n Valor da Variavel Ponteiro pvi = %d \n", *pvi);

    // Alterando Valor do Conte�do usando ponteiro:
    *pvi = 506;
    printf("\n Novo Valor da Variavel Ponteiro pvi = %d", *pvi);
    printf("\n Novo Conteudo para vi = %d \n", vi);

    return 0;
}
