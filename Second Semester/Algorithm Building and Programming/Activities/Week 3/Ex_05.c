// 5. Capture um número inteiro e exiba a tabuada dele (de 0 até 9).

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numero; // Dados do Usuário.
    int contador=0, tabuada; // Dados do Sistema.
    system("cls"); // Limpar.
    system("color 4"); // Cor Vermelha.

    // Recebendo dados do Usuário:
    printf("\n\t // TABUADA //\n");
    printf("\n> Digite um numero: ");
    scanf("%d", &numero);

    printf("\n\t________________");
    
    // Apresentando uma Saída:
    while(contador <= 9){
        
        tabuada = numero*contador;
        printf("\n\t| %2d x %2d = %2d |", numero, contador, tabuada);
        contador++;
    }
    printf("\n\t|______________|");
    getch();
    return 0;

}
