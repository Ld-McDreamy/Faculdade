#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Trocar o Idioma;

#define PI 3.1415

int main()
{
    // Trocando Idioma: Portugu�s:
    setlocale(LC_ALL,"");

    // Variaveis:
    float raio, perimetro;

    // Entrada de Dados:
    printf("\n Qual � a medida do raio?\n> Digite: ");
    scanf("%f", &raio);

    // Processamento:
    perimetro = (2*PI)*raio;

    // Sa�da:
    system("cls");
    printf("\n> O perimetro � %.2f\n\n", perimetro);

    // Fechando o Programa.
    getch();
    return 0;
}
