// 12. Escreva um algoritmo que gere os números de 1000 a 1999 e imprima apenas 
// aqueles que ao serem divididos por 11 dão resto igual a 5.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls"); // Limpar.
    system("color 2"); // Cor Verde.

    int x=1000, divi;

    printf("Numeros que dividido por 11, resta 5: ");
    do{
        divi = x % 11; // Calculando Resto de divisão.
        if(divi == 5){ // se resto for igual à 5, então mostra o numero(no caso a icognita x).
            printf("%d, ", x);
            x++;
        }
        else{
            x++;
        }
    }while(x<1999);
    
    getch();
    return 0;
}
