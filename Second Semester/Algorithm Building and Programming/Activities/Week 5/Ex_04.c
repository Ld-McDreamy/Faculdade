#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h> // Para gerar numeros aleatórios.

int main(void){
    system("cls");
    srand(time(0)); // Usando horario atual como base para geração de numeros aleatórios.

    int matriz_rd[3][3], rd=0, user_number, check_i, check_j; // Variáveis - rd = número aleatório.
    int i, j, check=0; // Contadores.
    
    // Gerando Matriz 3x3:
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            rd = rand() % 51; // Função para gerar os números (em conjunto com srand();).
            matriz_rd[i][j] = rd;
        }
    }

    // Começo do Jogo de adivinhação: Recebendo o palpite do usuário.
    printf("\n\t // Bem - Vindo ao Matriz-Game Show!! //\n\n");
    printf("Ok, digite um numero (0-50) e boa sorte \\O/\n> Digite aqui: ");
    scanf("%d", &user_number);

    // Checando se o usuário acertou e mostrando a matriz.
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(user_number == matriz_rd[i][j] && check == 0){ //Serve para achar o numero se for igual e sua localização.
                check=1;
                check_i = i+1;
                check_j = j+1;
            }
            printf("[%2d] ", matriz_rd[i][j]);
        }
        printf("\n");
    }

    // Apresentando o Resultado ao Usuário.
    if(check == 1) printf("\nUhuuu parabens!! \\O/\\O/\n> Numero: %d\n> Linha: %d\n> Coluna: %d\n", user_number, check_i, check_j);
    else printf("\nLamento Muito, Voce Perdeu </3\n> Numero nao encontrado: %d\n", user_number);

    getch();
    return 0;
}
