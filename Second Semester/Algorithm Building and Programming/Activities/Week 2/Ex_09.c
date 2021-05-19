#include <stdio.h>
#include <stdlib.h>

int main(void){
    float peso, alt, imc;
    system("cls"); // Limpar Terminal
    system("color 3"); // Cor 

    // Dados dos Usuários
    printf("\nDigite altura: ");
    scanf("%f", &alt);
    printf("\nDigite peso: ");
    scanf("%f", &peso);

    imc = peso / (alt * alt); // • Equação: IMC = peso / (altura * altura)

    if(imc < 17){ // • IMC abaixo de 17 significa “muito abaixo do peso”
        printf("\n\nMuito Abaixo do Peso...");
        printf(" IMC = %.2f", imc);
        printf("\nProcure um nutricionista!\n\n");
    
    }else if(imc < 18.5){ // • IMC entre 17 e 18,49 significa “abaixo do peso”
        printf("\n\nAbaixo do Peso...");
        printf(" IMC = %.2f", imc);
        printf("\nComa mais proteina e exercite-se ;)\n\n");
    
    }else if(imc < 25){ // • IMC entre 18,5 e 24,99 significa “peso normal”
        printf("\n\nPeso Normal :o ");
        printf(" IMC = %.2f", imc);
        printf("\nIsso mesmo continue assim...\n\n");
    
    }else if(imc < 30){ // • IMC entre 25 e 29,99 significa “acima do peso”
        printf("\n\nAcima do Peso :o ");
        printf(" IMC = %.2f", imc);
        printf("\nProcure comer melhor e exercitar-se mais.\n\n");

    }else if(imc < 35){ // • IMC entre 30 e 34,99 significa “obesidade I”
        printf("\n\nObesidade I");
        printf(" IMC = %.2f", imc);
        printf("\nProcure um nutricionista assim que possivel.\n\n");

    }else if(imc < 40){ // • IMC entre 35 e 39,99 significa “obesidade II”
        printf("\n\nObesidade II");
        printf(" IMC = %.2f", imc);
        printf("\nProcure um nutricionista o quanto antes.\n\n");

    }else if(imc >= 40){ // • IMC acima de 40 significa “obesidade III”
        printf("\n\nObesidade III");
        printf(" IMC = %.2f", imc);
        printf("\nProcure um nutricionista URGENTEMENTE!\n\n");

    }
    system("pause");
    return 0;
}
