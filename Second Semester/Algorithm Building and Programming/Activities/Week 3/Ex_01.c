// 1. Capture um número inteiro e exiba uma contagem de 0 até ele.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numero; // Número do usuário
    system("cls");
    system("color 2");
    do{
        printf("\n> Digite um numero para a contagem: ");
        scanf("%d", &numero);
    }while(numero <= 0);

    for (int i = 0; i <= numero; i++)
    {
        printf("\n *** %d ***", i);
    }

    printf("\n");
    getch();
}
