#include <stdio.h>

int main(void)
{   int day, month, year, still;
    printf("\n Que dia e hoje?\n");
    scanf("%d", &day);
    printf("\n\n Em que mes estamos?\n");
    scanf("%d", &month);
    printf("\n\n Em que ano estamos?\n");
    scanf("%d", &year);
    switch (month){
    case 1: printf("\n Estamos no mes de: Janeiro \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 2: printf("\n Estamos no mes de: Fevereiro \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 3: printf("\n Estamos no mes de: Março \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 4: printf("\n Estamos no mes de: Abril \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 5: printf("\n Estamos no mes de: Maio \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 6: printf("\n Estamos no mes de: Junho \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 7: printf("\n Estamos no mes de: Julho \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 8: printf("\n Estamos no mes de: Agosto \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 9: printf("\n Estamos no mes de: Setembro \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 10: printf("\n Estamos no mes de: Outubro \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 11: printf("\n Estamos no mes de: Novembro \n Faltam %d dias para o final do mes.\n\n", still); break;
    case 12: printf("\n Estamos no mes de: Dezembro \n Faltam %d dias para o final do mes.\n\n", still); break; };
    return 0;
    if (month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        still = 31 - day; }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        still = 30 - day; }
    else{
        still = 28 - day; } };