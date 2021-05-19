#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");

    int binario[5][5];  // Variável - Vetor.
    int i, j;   // Contadores.

    // Recebendo valor 1 se i = j --- recebendo valor 0 se i != j:
    printf("Matriz com 1 na Diagonal Principal:\n\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i == j) binario[i][j] = 1;
            else binario[i][j] = 0;
            
            printf("[%d] ", binario[i][j]); // Aprensentando a Saída dos Dados:
        }
        printf("\n");
    }

    getch();
    return 0;

}
