// 8. Capture 5 dados do tipo int do usuário, depois capture novamente mais 5 números 
// do tipo int e armazene-os em outro vetor. Imprima a união destes dois vetores.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");

    // Variáveis:
    int user_numbers1[5], user_numbers2[5], i, united[10];

    printf("\n> Lista 01 de numeros: \n");
    
    // Recebendo números do usuário:
    for(i=0; i < 5; i++){
        printf("0%d - Digite um numero: ", (i+1));
        scanf("%d", &user_numbers1[i]);
        united[i] = user_numbers1[i]; // Montando um conjunto único.
    }

    printf("\n> Lista 02 de numeros: \n");
    
    // Recebendo outro conjunto de números do usuário:
    for(i=0; i < 5; i++){
        printf("0%d - Digite um numero: ", (i+1));
        scanf("%d", &user_numbers2[i]);
        united[i+5] = user_numbers2[i]; // Montando um conjunto único.
    }

    // Saída de dados:
    for(i=0; i < 10; i++) printf("\n> %2d -- Numeros da Uniao: %d", (i+1), united[i]);

    getch();
    return 0;
}
