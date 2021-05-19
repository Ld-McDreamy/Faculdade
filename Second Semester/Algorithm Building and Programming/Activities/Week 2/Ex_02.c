/* 
    2-)  Faça um verificador de senhas corretas. 
    O usuário entra com uma senha (numérica) e você verifica se ela bate com o 
    valor configurado internamente pelo código. Mostre uma mensagem pertinente em cada caso.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int key = 251075, t_key;
    system("cls");
    
    do{
        printf("\n\t============= Sistema Bloqueado ===========\n");
        printf("\n\t\t  Digite a senha: ");
        scanf("%d", &t_key);
        printf("\n\t===========================================\n\n");
    }while(t_key != key);

    printf("\n\t============= Sistema Desbloqueado ===========");
    printf("\n\t|         > Bem Vindo ao Sistema <           |");
    printf("\n\t==============================================\n\n");

    system("pause");
    return 0;
}