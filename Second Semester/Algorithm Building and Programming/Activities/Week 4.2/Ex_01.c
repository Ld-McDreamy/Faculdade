/*
    1. A série de Fibonacci é formada pela sequência:
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    Crie um algoritmo que armazene os 100 primeiros termos da série de Fibonacci. 
    Em seguida apresente estes números na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");

    // Variáveis:
    int vetor_Fibonacci[10];
    int i;

    for(i=0; i<10; i++){
        vetor_Fibonacci[i] = 0;
    }

    vetor_Fibonacci[0] = 1;
    vetor_Fibonacci[1] = 1;
    
    for(i=1; i<10; i++){
        vetor_Fibonacci[i+1] = vetor_Fibonacci[i] + vetor_Fibonacci[i-1];
    }

    for(i=0; i<10; i++){
        printf("%d, ", vetor_Fibonacci[i]);
    }
    
    getch();
    return 0;
}
