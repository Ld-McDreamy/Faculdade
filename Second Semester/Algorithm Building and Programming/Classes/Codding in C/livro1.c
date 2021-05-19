#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    system("cls");
    system("color 3");

    int dvd;
    float p1=0.50, p2=0.45, valor=0;

    printf("\n\n********************************");
    printf("\n\20 Quantos DVDs comprados: ");
    scanf("%d", &dvd);
    printf("\b                                **");

    system("cls");

    if(dvd <= 100) valor = dvd * p1;
    else valor = dvd * p2;

    printf("\n*********** Vendas *************");
    printf("\n**  Obj.   Quant.  Valor T.   **");
    printf("\n**                            **");
    printf("\n**  DVD    %3d     R$ %7.2f **", dvd, valor);
    printf("\n**                            **");
    printf("\n**        Volte Sempre        **");
    printf("\n********************************\n\n");

    printf("%d %d %d %d", !3, !0, 3+'a'>'b'+2 && !'b', 1 || !2 && 3);
    
    getch();
    return 0;
}