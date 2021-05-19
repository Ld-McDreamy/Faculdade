#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Trocar o Idioma;

/*
Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la,
informe o consumo médio. Observação: Apresente o resultado com 3 casas decimais de precisão.
*/

void Cabecalho(){
    system("cls");
    system("color 3");
    // Cabeçalho com Nome, R.A. e Campus.
    printf("=================================================================\n");
    printf("| Desenvolvido por: Vinicius Carvalho ---- 74.381 ---- UNASP-HT |\n");
    printf("=================================================================\n\n");
}

float Consumo_Medio(float distancia, float combustivel){
    return(distancia/combustivel); // Processamento e Retorno
}

int main(){
    // Trocando Idioma: Português:
    setlocale(LC_ALL,"");
    Cabecalho();

    // Variáveis:
    float distancia, combustivel;

    // Entrada de Dados:
    printf("\n> Digite a distância total percorrida: ");
    scanf("%f", &distancia);
    printf("\n> Digite o total de combustível gasto: ");
    scanf("%f", &combustivel);
    system("cls");

    // Processamento e Saída:
    Cabecalho();
    printf("\n\t> O Consumo médio é igual à: %.3f Litros/Km <\n\n", Consumo_Medio(distancia, combustivel));

    getch();
    return 0;
}
