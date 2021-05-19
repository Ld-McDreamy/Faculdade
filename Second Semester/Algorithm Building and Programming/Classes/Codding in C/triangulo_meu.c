/*
    12. DESAFIO: Escreva um programa que leia um número inteiro positivo e em seguida 
    imprima essa mesma quantidade de linhas do Triângulo de Pascal:
    
        • N = 3
                i. 1
                ii. 1 1
                iii. 1 2 1
    
        • N = 5
                i. 1
                ii. 1 1
                iii. 1 2 1
                iv. 1 3 3 1
                v. 1 4 6 4 1

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    system("cls");
    system("color 3"); // Cor: Azul.
    
    // Váriaveis:
    long int lines, n, x, y, divi, fatorP, fatorN, fatorN_P, multi;

    do{
        printf("\n\t> Linhas do Triangulo de Pascal [1-30]: ");
        scanf("%li", &lines);
    }while(lines > 12 || lines < 1);
    
    printf("\n\tTriangulo de Pascal - [%li]", lines);
    printf("\n\n 1 ");

    for(n=1; n<=lines; n++){
        for(x=0; x<n; x++){
            if(x==0){
                printf("\n 1");
            }else if(x==1){
                printf(" %li", n);
            }else if((n-1) == x){
                printf(" %li", n);
            }else{
                fatorN = n;
                for(y=(n-1); y>=1; y--){
                    fatorN = fatorN * y;
                }

                fatorP = x;
                for(y=(x-1); y>=1; y--){
                    fatorP = fatorP * y;
                    
                }

                fatorN_P = n-x;
                for(y=((n-x)-1); y>=1; y--){
                    fatorN_P = fatorN_P * y;
                }

                multi = fatorN_P * fatorP;
                divi = fatorN / multi;

                printf(" %li", divi);

            }
            
        }
        printf(" 1");
    }
}
// Só vai até 12.