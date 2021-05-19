#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    system("color 3"); // Cor: Azul.
    
    // Váriaveis:
    int user_number1[5], user_number2[5], i, check, difference[5];

    // Entrada e Processamento A:
    printf("\n [A] \n\n");
    for(i=0; i<5; i++){
        printf("> Digite um numero inteiro: ");
        scanf("%d", &user_number1[i]);
        difference[i] = user_number1[i];
    }

    // Entrada e Processamento B:
    printf("\n\n [B] \n\n");
    for(i=0; i<5; i++){
        printf("> Digite um numero inteiro: ");
        scanf("%d", &user_number2[i]);
        for(check=0; check<5; check++) if(user_number2[i] == user_number1[check]) difference[check] = 0;
    }

    // Saida C:
    system("cls");
    printf("\n [C] \n\n");
    for(i=0; i<5; i++) if(difference[i] != 0) printf("| %d | ", difference[i]);

    getch();
    return 0;
}
