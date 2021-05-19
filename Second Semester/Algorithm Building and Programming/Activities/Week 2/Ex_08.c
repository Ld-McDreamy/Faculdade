/*
8. Ao vender DVD’s para gravação, a sua loja consegue vender a R$ 0,50
para quem compre até 100 unidades e a R$ 0,45 para quem compra acima de 100 unidades.
Capture a quantidade DVD’s que o usuário quer comprar e informe a ele o valor do custo total.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
    system("color 3");

    int dvd;
    float p1=0.50, p2=0.45, valor=0;

    printf("\n\n*******************************************");
    printf("\n\20 Quantos DVDs comprados: ");
    scanf("%d", &dvd);

    system("cls");

    if(dvd <= 100) valor = dvd * p1;
    else valor = dvd * p2;

    printf("\n********** Vendas **********");
    printf("\n** Obj.  Quant.  Valor T. **");
    printf("\n**                        **");
    printf("\n** DVD    %d     R$%.2f  **", dvd, valor);
    printf("\n**                        **");
    printf("\n**      Volte Sempre      **");
    printf("\n****************************\n\n");

    system("pause");
    return 0;
}