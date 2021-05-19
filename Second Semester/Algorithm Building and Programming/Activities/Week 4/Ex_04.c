// 4. Capture 5 dados do tipo float do usuário. Após a captura apresente o maior destes
// valores e a sua posição no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    // Variáveis:
    float numbers[5], maior=0; // 0 até 4.
    int i, pos;

    // Recebendo entradas do usuário:
    for(i=0; i<5; i++){
        printf("> %d - Digite um numero: ", (i+1));
        scanf("%f", &numbers[i]);
        
        // Análisando se o número é o maior digitado:
        if(numbers[i] > maior){
            maior = numbers[i];
            pos = (i+1);
        }
    }

    // Saida para o usuário.
    printf("\n\nO maior numero foi %.2f na posicao %d.", maior, pos);

    getch();
    return 0;
}
