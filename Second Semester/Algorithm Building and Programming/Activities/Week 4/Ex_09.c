// 9. Capture 5 dados do tipo int do usuário, depois capture novamente mais 5 números 
// do tipo int e armazene-os em outro vetor. Imprima a intersecção destes dois vetores.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    
    // Váriaveis:
    int user_number1[5], user_number2[5], i, check, intersection[5];

    // Recebendo dados do usuário:
    for(i=0; i<5; i++){
        printf("0%d - Digite numero inteiro: ", (i+1));
        scanf("%d", &user_number1[i]);
    }

    printf("\n");

    // Recebendo mais dados do usuário:
    for(i=0; i<5; i++){
        printf("0%d - Digite numero inteiro: ", (i+1));
        scanf("%d", &user_number2[i]);
        
        // Análisando se o número digitado já foi recebido no primeiro vetor:
        intersection[i]=0;
        for(check=0; check<5; check++) if(user_number2[i] == user_number1[check]) intersection[i] = user_number2[i];
        // FOR - Passa por todos os números do primeiro vetor; IF - Verifica se é o mesmo já digitado, se sim, adiciona o número ao vetor final.
    }
    printf("\n Interseccoes: ");

    // Apresentando a Intersecção ao usuário:
    for(i=0; i<5; i++) if(intersection[i] != 0) printf("| %d | ", intersection[i]);

    getch();
    return 0;
}
