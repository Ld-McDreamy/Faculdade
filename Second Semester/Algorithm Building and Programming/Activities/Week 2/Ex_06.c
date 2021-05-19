#include <stdio.h>
#include <stdlib.h>

int main(void){
    float l1, l2,l3;
    system("cls");

    // Recebendo medida dos lados do triângulo.
    printf("\nDigite o PRIMEIRO lado: ");
    scanf("%f", &l1);
    printf("\nDigite o SEGUNDO lado: ");
    scanf("%f", &l2);
    printf("\nDigite o TERCEIRO lado: ");
    scanf("%f", &l3);
    system("cls");

    if(l1 == l2 && l1 == l3 && l2 == l3){ // .Todos os lados são iguais.
        printf("\n\t// Tri\203ngulo Equil\240tero //");
        printf("\n\n Lado 1: %.2f\n Lado 2: %.2f\n Lado 3: %.2f\n\n", l1, l2, l3);

    }else if(l1 != l2 && l1 != l3 && l2 != l3){ // Nenhum dos lados são iguais.
        printf("\n\t// Tri\203ngulo Escaleno //");
        printf("\n\n Lado 1: %.2f\n Lado 2: %.2f\n Lado 3: %.2f\n\n", l1, l2, l3);

    }else if(l1 == l2 != l3 || l3 == l1 != l2 || l2 == l3 != l1){ // Tem dois lados iguais e um diferente.
        printf("\n\t// Tri\203ngulo Is\242sceles //");
        printf("\n\n Lado 1: %.2f\n Lado 2: %.2f\n Lado 3: %.2f\n\n", l1, l2, l3);
    }

    system("pause");
    return 0;
}