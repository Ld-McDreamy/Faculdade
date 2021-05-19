// Capture 5 dados do tipo float do usuário. 
//Mostre a quantidade de números positivos e a quantidade de números negativos.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");

    // Variáveis:
    float user_number[5];
    int i, negative=0, positive=0, zero=0;
    
    // Recebendo números do usuário:
    for(i=0; i < 5; i++){
        printf("> %d - Digite um numero: ", (i+1));
        scanf("%f", &user_number[i]);

        // Analizando a quantidade de positivos e de negativos:
        if(user_number[i] > 0) positive++;
        else if(user_number[i] < 0) negative++;
        else zero++;
    }

    // Saída de dados:
    printf("\nQuantidade de Numeros Positivos: %d.", positive);
    printf("\nQuantidade de Numeros Negativos: %d.", negative);
    printf("\nQuantidade de Numeros Neutros: %d.\n", zero);

    getch();
    return 0;
}
