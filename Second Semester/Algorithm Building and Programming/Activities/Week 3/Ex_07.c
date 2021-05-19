/*
    7. Um número natural é triangular se é igual à soma dos n primeiros números naturais 
    consecutivos, a partir de 1. Por exemplo, 1, 3, 6, 10, 15 são triangulares. 
    Capture um número inteiro natural e informe se ele é triangular.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    int numero, i=0, n_triangulo;
    system("cls");
    system("color 3");

    do{ // Solicitando um número que seje menor que 500500 (equivalente a T1000)
        printf("\n. Digite um numero inteiro (1-500500): ");
        scanf("%d", &numero);
    }while(numero >= 500500 || numero <= 0);

    do{ // Análisando para ver se número do usuário é triangular 
        i++;
        n_triangulo = ((i+(i*i))/2);
        printf("\n %d - Analisando ", i);
        Sleep(1);
        printf(".");
        Sleep(1);
        printf(".");
        Sleep(1);
        printf(".");
        system("cls");
    }while(n_triangulo != numero && i != 1001);

    system("cls");
    
    if(i > 1000){
        printf("\n\t > O numero %d - Nao e um numero Triangular\n", numero);
    }else{
        printf("\n\t > O numero %d - E o %d\370 numero Triangular\n", numero, i);
    }

    getch();
    return 0;

}
