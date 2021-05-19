#include <stdio.h>
#include <stdlib.h>

int main(void){
    int op;
    float n1, n2, result;
    system("cls");

    printf("\nDigite um valor: ");
    scanf("%f", &n1);
    printf("\nDigite outro valor: ");
    scanf("%f", &n2);
    system("cls");
    
    printf("\n\tEscolha uma opera\207\306o: \n > 0 representa a soma;\n > 1 representa a subtra\207\306o;"
    "\n > 2 representa a multiplica\207\306o;\n > 3 representa a divis\306o.\n\n \20 Opera\207\306o: ");
    scanf("%d", &op);
    
    switch(op){
        case 0:
            result = n1 + n2;
            printf("\n\n\t%2.f +%2.f = %2.f\n\n", n1, n2, result);
            break;
        case 1:
            result = n1 - n2;
            printf("\n\n\t%2.f -%2.f = %2.f\n\n", n1, n2, result);
            break;
        case 2:
            result = n1 * n2;
            printf("\n\n\t%2.f *%2.f = %2.f\n\n", n1, n2, result);
            break;
        case 3:
            result = n1 / n2;
            printf("\n\n\t%2.f /%2.f = %2.f\n\n", n1, n2, result);
            break;

        default:
            printf("\n\n\t// Sinto muito, op\207\306o inv\240lida //\n\n");
            break;
    }

    system("pause");
    return 0;
}
