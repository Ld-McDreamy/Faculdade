// 3. Apresente a conversão entre centímetros para polegadas desde 0 cm até 100 cm.


#include <stdio.h>
#include <stdlib.h>
#define uma_polegada 2.54 // Uma polegada possui aproximadamente 2,54 cm.

int main(void){
    int centimetros;
    float polegadas;
    system("cls");
    system("color 3");

    for (centimetros = 0; centimetros <= 100; centimetros++)
    {
        polegadas = centimetros / uma_polegada;
        printf("\n\t> %3d Centimetros = %5.2f Polegadas <", centimetros, polegadas);
    }
    getch();
}
