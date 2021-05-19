// 2. Capture uma sequência de números inteiros e exiba primeiro os elementos em posições pares
// e depois os elementos em posições ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    // Variáveis:
    int numbers[10]; // 0 até 9.
    int i;


    // Recebendo entradas do usuário:
    for(i=0; i < 10; i++){
        printf("Digite algum numero: ");
        scanf("%d", &numbers[i]);
    }

    // Saida para o usuário.
    for(i=0; i < 10; i++){ // Números Pares.
        if((i+1) % 2 == 0){
            printf("\n> O numero na posicao %d -- %d", (i+1), numbers[i]);
        }
    }

    for(i=0; i < 10; i++){  // Números Ímpares.
        if((i+1) % 2 != 0){
            printf("\n> O numero na posicao %d -- %d", (i+1), numbers[i]);
        }
    }

    getch();
    return 0;
}
