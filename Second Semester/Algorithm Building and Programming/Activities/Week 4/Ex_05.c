// 5. Capture 5 dados do tipo float do usuário. Após a captura apresente o menor 
// destes valores e a sua posição no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    // Variáveis:
    float numbers[5], menor=999999; // 0 até 4.
    int i, pos;

    // Recebendo entradas do usuário:
    for(i=0; i<5; i++){
        printf("> %d - Digite um numero: ", (i+1));
        scanf("%f", &numbers[i]);
        
        // Análisando se o número é o menor digitado:
        if(numbers[i] < menor){
            menor = numbers[i];
            pos = (i+1);
        }
    }

    // Saida para o usuário.
    printf("\n\nO menor numero foi %.2f na posicao %d.", menor, pos);

    getch();
    return 0;
}
