# 6.Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
# Ex.: 5!=5.4.3.2.1=120

import os
os.system('cls') # Limpar o Terminal .
os.system('color 4') # Mudança na cor das letras (Vermelho).

number = -1

while number < 0:
    number = int(input("\n► Digite um número positivo: ")) #Entrada do Usuário enquanto não positivo.

contador = (number-1)
fator = number

# Calculando o Fatorial
while contador != 0:
    fator *= contador
    contador -= 1

print("\n• O fatorial de %d é igual à: %d." %(number, fator)) # Imprimindo resultado.
