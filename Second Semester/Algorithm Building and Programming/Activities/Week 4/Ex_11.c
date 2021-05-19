// 11. DESAFIO: Leia 5 números float do usuário. 
// Ordene estes números e apresente-os em forma crescente.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    system("color 3"); // Cor: Azul.
    
    // Váriaveis:
    float user_number[5], aux;
    int i, g;

    // Recebendo os números:
    for(i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%f", &user_number[i]);   
    }

    // Colocando Vetor em Ordem:
    for(i=0; i<5; i++){
        for(g=i; g<5; g++){
            if(user_number[i] > user_number[g]){
                aux = user_number[i];
                user_number[i] = user_number[g];
                user_number[g] = aux;
            }
        }        
    }

    // Saida em ordem Crescente:
    for(i=0; i<5; i++){
        printf("\n[%d]: %.2f", (i+1), user_number[i]);
    }
    
    getch();
    return 0;
}
