// 9. Capture um número do usuário e mostra a ela a soma de todos os números até o número digitado.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls"); // Limpar.
    system("color 4"); // Cor Vermelha.

    int numero, soma=0, cont=1;

    do{ // Análisa se o número é positivo e maior que 0.
        printf("\n> Digite um numero: ");
        scanf("%d", &numero);
    }while(numero <= 0);
    
    while(cont<=numero){ // Soma todos os numero até o digitado.
        soma += cont;
        cont++;
    }

    printf("\n\t. A soma ate o numero digitado = %d", soma);


    getch();
    return 0;
}
