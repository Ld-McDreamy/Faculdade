/*
    1. Codifique um programa para ler uma matriz quadrada (quantidade de linhas = quantidade 
    de colunas) de ordem n e exibir apenas os elementos da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    int number[4][4]; // Variável - Vetor.
    int i, j; // Contadores.

    // Recebendo dados na Matriz:
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite um numero: ");
            scanf("%d", &number[i][j]);
        }
    }
    
    system("cls");

    // Aprensentando a Saída dos Dados:
    printf("Elementos da Diagonal principal: \n");
    for(i=0; i<4; i++) for(j=0; j<4; j++) if(i == j) printf("[%d]", number[i][j]);
    
    getch();
    return 0;
}
