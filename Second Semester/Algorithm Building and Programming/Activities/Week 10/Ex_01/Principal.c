#include <stdio.h>
#include "Geometria.h"

int main()
{
	float valor_usuario;
	
	printf("\nEntre com um valor: ");
	scanf("%f", &valor_usuario);
		
	printf("\nPerimetro do circulo com raio %.2f: %.2f", valor_usuario, Perimetro_Circulo(valor_usuario));
	printf("\nPerimetro do quadrado com lado %.2f: %.2f", valor_usuario, Perimetro_Quadrado(valor_usuario));
	printf("\nVolume da esfera com raio %.2f: %.2f", valor_usuario, Volume_Esfera(valor_usuario));
	printf("\nVolume do cubo com lado %.2f: %.2f", valor_usuario, Volume_Cubo(valor_usuario));

    return 0;
}
