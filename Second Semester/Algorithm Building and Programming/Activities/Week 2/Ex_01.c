// 1.Capture dois números inteiros e informe ao usuário se cada um deles é par ou não.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1, n2, rest1, rest2;

    system ("cls");
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n1);
    printf("\nDigite segundo numero inteiro: ");
    scanf("%d", &n2);

    rest1 = n1 % 2;
    rest2 = n2 % 2;

    if (rest1 == 0){
        printf("\n\n\t%d - Numero par!", n1);

    }else{
        printf("\n\n\t%d - Numero impar!", n1);
    }

    if (rest2 == 0){
        printf("\n\n\t%d - Numero par!\n\n", n2);

    }else{
        printf("\n\n\t%d - Numero impar!\n\n", n2);
    }

    system("pause");
    return 0;
}
