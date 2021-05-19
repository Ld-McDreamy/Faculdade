#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    int number[3][3]; // Variável - Matriz.
    int i, j, valor=0; // Contadores.

    // Recebendo dados na Matriz:
    for(i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Digite um numero: ");
            scanf("%d", &number[i][j]);
            
            //Identificando valores diferentes de 0:      
            if(number[i][j] != 0) valor++;
        }
    }

    // Aprensentando a Saída dos Dados:
    printf("\n\nQuantidade de valores diferentes de 0: %d.", valor);

    getch();
    return 0;
}
