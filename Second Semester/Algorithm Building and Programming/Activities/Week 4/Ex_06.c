// Capture 5 dados do tipo float do usuário. 
// Após a captura, armazene em um outro vetor o quadrado de cada um dos valores originais.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main(void){
    system("cls");
    
    // Variáveis:
    float numero_usuario[5], quadrado[5];
    int i;

    // Recebendo numeros do usuário:
    for(i=0; i < 5; i++){
        printf("> %d - Digite um numero: ", (i+1));
        scanf("%f", &numero_usuario[i]);

        // Calculando o quadrado dos números do usuário:
        quadrado[i] = numero_usuario[i] * numero_usuario[i];
    }

    // Saída:
    for(i=0; i < 5; i++) printf("\n%d - Numero Digitado = %.2f --> Quadrado = %.2f", (i+1), numero_usuario[i], quadrado[i]);

    getch();
    return 0;
}
