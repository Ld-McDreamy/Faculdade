#include "Geometria.h"
#define PI 3.141596

float Perimetro_Circulo(float raio)
{
    float perimetro = 2 * PI * raio;

    return perimetro;
}

float Perimetro_Quadrado(float lado)
{
    float perimetro  = 4 * lado;

    return perimetro;
}

float Volume_Esfera(float raio)
{
    float volume = 4 / 3 * PI * (raio * raio * raio);

    return volume;
}

float Volume_Cubo(float lado)
{
    float volume = lado * lado * lado;

    return volume;
}