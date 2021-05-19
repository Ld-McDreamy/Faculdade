// 4. Capture dois números inteiros e apresente o resultado da potência entre eles.
// • Se 𝑎=𝑏𝑐 então 𝑎=𝑏∗𝑏∗𝑏∗…. por “c” vezes

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int base, expoente; // Número do usuário
    int resultado; // resultado da potência
    system("cls"); // Limpar.
    system("color 4"); // Cor Vermelha.

    // Recebendo dados do Usuário:
    printf("Digite uma Base: ");
    scanf("%d", &base);
    printf("Digite um Expoente: ");
    scanf("%d", &expoente);
    resultado = base;

    // Operações
    for(int i=1; i != expoente; i++) resultado = resultado * base;    

    // Saída
    printf("\n\n> %d elevado a %d = %d\n", base, expoente, resultado);
    
    getch();
    return 0;
}
