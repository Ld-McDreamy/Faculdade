#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Trocar o Idioma;

/*
Dados uma dist�ncia e o total de litros de combust�vel gasto por um autom�vel para percorr�-la,
informe o consumo m�dio. Observa��o: Apresente o resultado com 3 casas decimais de precis�o.
*/

void Cabecalho(){
    system("cls");
    system("color 3");
    // Cabe�alho com Nome, R.A. e Campus.
    printf("=================================================================\n");
    printf("| Desenvolvido por: Vinicius Carvalho ---- 74.381 ---- UNASP-HT |\n");
    printf("=================================================================\n\n");
}

float Consumo_Medio(float distancia, float combustivel){
    return(distancia/combustivel); // Processamento e Retorno
}

int main(){
    // Trocando Idioma: Portugu�s:
    setlocale(LC_ALL,"");
    Cabecalho();

    // Vari�veis:
    float distancia, combustivel;

    // Entrada de Dados:
    printf("\n> Digite a dist�ncia total percorrida: ");
    scanf("%f", &distancia);
    printf("\n> Digite o total de combust�vel gasto: ");
    scanf("%f", &combustivel);
    system("cls");

    // Processamento e Sa�da:
    Cabecalho();
    printf("\n\t> O Consumo m�dio � igual �: %.3f Litros/Km <\n\n", Consumo_Medio(distancia, combustivel));

    getch();
    return 0;
}
