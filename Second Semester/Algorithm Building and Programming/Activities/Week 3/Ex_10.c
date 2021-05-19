// 10. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro 
// e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima 
// quantos anos serão necessários para que Zé seja maior que Chico.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls"); // Limpar.
    system("color 2"); // Cor Verde.

    int alt_chico=150, alt_ze=110, x=0;

    while(alt_chico >= alt_ze){
        alt_chico += 2; // À cada ano Chico aumenta 2cm.
        alt_ze += 3; // À cada ano Zé aumenta 3cm.
        x++; // Quantidade de anos
    }

    printf("\nSerao nescessarios %d anos para que Ze\nseje maior que Chico -- %d centimentro.", x, (alt_ze-alt_chico));
    
    getch();
    return 0;
}
