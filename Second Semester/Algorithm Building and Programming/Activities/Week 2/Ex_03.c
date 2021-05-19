#include <stdio.h>
#include <stdlib.h>

int main(void){
    float salar, no, p75, p15, p225, p275;
    system("cls");
    system("color 2");

    // Tabela de alíquota

    no = 1903.98; // • Até R$ 1903,98 não há alíquota.
    p75 = 2826.65; // • De R$1903,99 até R$ 2826,65 a alíquota é de 7,5%
    p15 = 3751.05; // • De R$2826,66 até R$ 3751,05 a alíquota é de 15%
    p225 = 4664.59; // • De R$ 3751,06 até R$ 4664,6 a alíquota é de 22,5%
    p275 = 4664.68; // • Acima de R$ 4664,68 a alíquota é de 27,5%

    printf("\nDigite seu sal\240rio aqui: ");
    scanf("%f", &salar);

    if(salar < (no + 0.01)) printf("\n\tNão h\240 Al\241quota\n\n");
    else if(salar < (p75 + 0.01)) printf("\n\tAl\241quota = 7,5%%\n\n");
    else if(salar < (p15 + 0.01)) printf("\n\tAl\241quota = 15%%\n\n");
    else if(salar < (p225 + 0.02)) printf("\n\tAl\241quota = 22,5%%\n\n");
    else printf("\n\tAl\241quota = 27,5%%\n\n");

    system("pause");
    return 0;
}