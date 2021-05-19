// 11. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, 
// se eles forem pares. Termine a leitura se o usuário digitar zero (0).

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float number_user=0, media=0, base=0;
    int cont=-1;
    printf("\n\tDescubra a media de numeros\n\t(Digite 0 para finalizar)\n\n");

    do{
        printf("Digite um numero: ");
        scanf("%f", &number_user);

        base += number_user;
        cont++;

    }while(number_user != 0);

    media = base/cont;

    printf("Media = %.2f", media);

    getch();
    return 0;

}
