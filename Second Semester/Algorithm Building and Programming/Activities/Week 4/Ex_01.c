// 1. Capture uma sequência de números inteiros e exiba-os em ordem inversa.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    // Variáveis:
    int numbers[5]; // 0 até 4.
    int i;


    // Recebendo entradas do usuário:
    for(i=0; i < 5; i++){
        printf("Digite algum numero: ");
        scanf("%d", &numbers[i]);
    }

    // Saida para o usuário.
    for(i=4; i >= 0; i--){
        printf("\n> O numero na posicao %d -- %d", (i+1), numbers[i]);
    }

    getch();
    return 0;
}
