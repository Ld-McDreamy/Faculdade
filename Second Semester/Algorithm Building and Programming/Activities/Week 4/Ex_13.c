/*
    13. DESAFIO: Leia 10 números do tipo float do usuário. 
    Após a leitura, faça uma “limpeza” de valores negativos, ou seja:
    
    • Pegue os elementos da frente deste valor e estes devem ser movidos uma posição 
    para trás no vetor.
    • No final mostre como ficou o vetor (não devemos ter nenhum valor negativo, e a ordem 
    de impressão deve ser a mesma que o usuário entrou!)
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    system("color 3"); // Cor: Azul.
    
    // Váriaveis:
    float user_number[10], aux[10];
    int x, y=0; // Contadores.

    // Recebendo os números do usuário:
    for(x=0; x<10; x++){
        printf("Digite um numero (diferente de 0): ");
        scanf("%f", &user_number[x]);
    }

    // Eliminando os números negativos:
    for(x=0; x<10; x++) if(user_number[x] >= 0){
        aux[y] = user_number[x];
        y++;
    }
    
    // Saida sem negativos:
    for(x=0; x<y; x++) printf("\n[%d]: %.2f", (x+1), aux[x]);

    getch();
    return 0;
}
