// 2. Capture um número inteiro e exiba uma contagem regressiva até 0.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numero; // Número do usuário
    system("cls");
    system("color 3");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0){ // Caso número +
        for(int i = numero; i >= 0; i--){
            printf("\n *** %d ***", i);
        }
    }else if(numero < 0){ // Caso número -
        for(int i = numero; i <= 0; i++){
            printf("\n *** %d ***", i);
        }
    }else{
        printf("\n *** %d ***", numero);
    }

    printf("\n");
    getch();
}
