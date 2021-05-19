#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a1, a2,a3;
    system("color 2");
    system("cls");

    // Recebendo ângulos do triângulo.
    printf("\nDigite o PRIMEIRO \203ngulo: ");
    scanf("%f", &a1);
    printf("\nDigite o SEGUNDO \203ngulo: ");
    scanf("%f", &a2);
    printf("\nDigite o TERCEIRO \203ngulo: ");
    scanf("%f", &a3);
    system("cls");

    if(a1 == 90 || a2 == 90 || a3 == 90){ // Possui exatamente um ângulo interno igual a 90°.
        printf("\n\t// Tri\203ngulo Ret\203ngulo //");
        printf("\n\n \266ngulo 1: %.2f\n \266ngulo 2: %.2f\n \266ngulo 3: %.2f\n\n", a1, a2, a3);

    }else if(a1 > 90 || a2 > 90 || a3 > 90){ // Possui exatamente um ângulo interno maior que 90°.
        printf("\n\t// Tri\203ngulo Obtus\203ngulo //");
        printf("\n\n \266ngulo 1: %.2f\n \266ngulo 2: %.2f\n \266ngulo 3: %.2f\n\n", a1, a2, a3);
    
    }else if(a1 < 90 && a2 < 90 && a3 < 90){ // Possui todos os ângulo internos menores que 90°.
        printf("\n\t// Tri\203ngulo Acut\203ngulo //");
        printf("\n\n \266ngulo 1: %.2f\n \266ngulo 2: %.2f\n \266ngulo 3: %.2f\n\n", a1, a2, a3);
    
    }
    system("pause");
    return 0;
}
