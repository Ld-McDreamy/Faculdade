#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n1, n2,n3, p1, p2, p3;
    system("color 1");
    system("cls");

    // Recebendo Números do Usuário.
    printf("\nDigite o PRIMEIRO n\243mero: ");
    scanf("%f", &n1);
    printf("\nDigite o SEGUNDO n\243mero: ");
    scanf("%f", &n2);
    printf("\nDigite o TERCEIRO n\243mero: ");
    scanf("%f", &n3);
    system("cls");

    printf("\n\t // N\243meros em Ordem Crescente //");

    if(n1 > n2 && n1 > n3 && n2 > n3){
        p1 = n1;
        p2 = n2;
        p3 = n3;

    }else if(n2 > n1 && n2 > n3 && n1 > n3){
        p1 = n2;
        p2 = n1;
        p3 = n3;
    
    }else if(n3 > n2 && n3 > n1 && n2 > n1){
        p1 = n3;
        p2 = n2;
        p3 = n1;
    
    }else if(n1 > n3 && n1 > n2 && n3 > n2){
        p1 = n1;
        p2 = n3;
        p3 = n2;
    
    }else if(n2 > n3 && n2 > n1 && n3 > n1){
        p1 = n2;
        p2 = n3;
        p3 = n1;
    
    }else if(n3 > n1 && n3 > n2 && n1 > n2){
        p1 = n3;
        p2 = n1;
        p3 = n2;
    }

    printf("\n\n\t\t   \20 %.2f\n\t\t   \20 %.2f\n\t\t   \20 %.2f\n\n", p3, p2, p1);

    system("pause");
    return 0;
}
