#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a função strcmp
#include<windows.h>
#include<conio.h>
#define SENHA 1234

void alarme(void); /* declaração da função */

void main(void) {
    int s;

    system("cls");
    printf("\nSenha: ");
    scanf("%d", &s);
    
    if( s != SENHA ) {
        printf("\nSenha inválida!");
        alarme();
    }
    else printf("\nSenha Ok!");
        getch();
}

void alarme(void) { /* definição da função */
    int f;
    for(f=100; f<=5000; f+=20) {
        sound(f);
        delay(100);
    }
    nosound();
}