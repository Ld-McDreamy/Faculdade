// 6. Exiba um tabuleiro de xadrez, onde as casas brancas você utilizará “B” 
//e para as casas pretas utilizará “P”.
//• Dica: é interessante utilizar aninhamento!

#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls"); // Limpar.
    system("color 3"); // Cor Azul.
    int cont, tabuleiro=8, colun, check=2;

    printf("\n> Tabuleiro de Xadrez <\n\n"); // Título

    for(colun = 0; colun < tabuleiro; colun++){
        if(check % 2 == 0){ // Se o checador de ordem(check) for par, então a fileira começa com Preto.
            for (cont = 0; cont < tabuleiro; cont++){ // Serve para variar entre Preto e Branco.
                if(cont % 2 == 0){
                    printf("P");
                }
                else{
                    printf("|B|");
                }
            }
            check++; // Adiciona +1 ao checador de ordem.
        }else{ // Se o checador de ordem(check) for ímpar, então a fileira começa com Branco.
            for (cont = 0; cont < tabuleiro; cont++){ // Serve para variar entre Branco e Preto. 
                if(cont % 2 == 0){
                    printf("B");
                }
                else{
                    printf("|P|");
                }
            }
            check++; // Adiciona +1 ao checador de ordem.
        }
        printf("\n"); // Pula uma linha.
    }
    getch();
    return 0;
}
