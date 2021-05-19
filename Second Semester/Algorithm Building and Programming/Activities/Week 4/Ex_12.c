/*
    12. DESAFIO: Escreva um programa que leia um número inteiro positivo e em seguida 
    imprima essa mesma quantidade de linhas do Triângulo de Pascal:
    
        • N = 3
                i. 1
                ii. 1 1
                iii. 1 2 1
    
        • N = 5
                i. 1
                ii. 1 1
                iii. 1 2 1
                iv. 1 3 3 1
                v. 1 4 6 4 1

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    system("color 3"); // Cor: Azul.
    
    // Váriaveis:
    int lines, n, p, coef=0;

    // Recebendo a quantidade de linhas - 29(limite).
    do{
        printf("\n> Linhas do Triangulo de Pascal [1-29]: ");
        scanf("%d", &lines);
    }while(lines > 29 || lines < 1);

    system("cls"); // Limpando Terminal. 
    printf("\n\tTriangulo de Pascal - [%d]\n\n", lines);

    // Calculando:
    for(n=0; n<=lines; n++){
        for(p=0; p<=n; p++){
            if(n == 0 || p == 0) coef = 1;
            else coef = coef * (n-p+1)/p;
            printf("%d ", coef); // Apresentando o triângulo de Pascal;
        }
        printf("\n");
    }
    getch();
    return 0;
}
