/*
8. Registre internamente um número qualquer. Peça para o usuário entrar com um número.
 Enquanto o número que o usuário entrar for diferente do cadastrado imprima uma mensagem
 falando que ele errou!
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    system("color 3");

    int key=74381, key_try, l;

    printf("\n\n\t-------------------------------------\n"
            "\t| > SISTEMA DE SEGURANCA NACIONAL < |\n"
            "\t-------------------------------------");
    printf("\n\n> Bem-Vindo Agente Vinicius!");

    do{
        printf("\nDigite sua senha: ");
        scanf("%d", &key_try);
        l = 0;

        printf("\n\tPROCESSANDO ");
        while(l<3){
            printf(".");
            Sleep(1000);
            l++;
        }
        if(key_try != key) printf("\n- Voce errou, tente novamente! -\n");
    }while(key_try != key);

    
    Beep(660,100);Sleep(15);
    Beep(660,100);Sleep(30);
    Beep(660,100);Sleep( 300);
    Beep(510,100);Sleep( 100);
    Beep(660,100);Sleep( 300);
    Beep(770,100);Sleep( 550);
    Beep(380,100);Sleep( 575);

    system("cls");
    system("color 09");
    printf("\n\n\t SENHA CORRETA");
    Sleep(2200);
    system("cls");
    printf("\n\n\t Parabens");

    getch();
    return 0;
}
