// 3. Capture 5 dados do tipo float do usuário. Após a captura apresente a média destes valores.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    // Variáveis:
    float notas[5], media, soma=0;
    int i;

    // Recebendo entradas do usuário:
    printf("\n\tBem-Vindo(a) ao SISTEMA DE NOTAS\n\n");
    for(i=0; i<5; i++){
        printf("> Digite a nota: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i]; // Somando as entradas.

    }
    media = soma/i; // Calculando Média.

    // Saida para o usuário.
    printf("\n\t > Media = %.2f <\n", media);

    getch();
    return 0;
}
