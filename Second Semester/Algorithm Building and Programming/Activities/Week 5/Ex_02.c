/*
    2. Crie e leia uma matriz 4x4, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    int number[4][4]; // Variável - Vetor.
    int i, j, valor=0; // Contadores.

    // Recebendo dados na Matriz:
    for(i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("Digite um numero: ");
            scanf("%d", &number[i][j]);
            
            //Identificando valores maiores que 10:      
            if(number[i][j] > 10) valor++;
        }
    }

    // Aprensentando a Saída dos Dados:
    printf("\n\nQuantidade de valores maiores que 10: %d.", valor);

    getch();
    return 0;
}
