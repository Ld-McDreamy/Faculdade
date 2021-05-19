# 5. Faça um programa que peça 20 números inteiros, calcule e mostre a quantidade
# de números pares e a quantidade de números ímpares.

import os
os.system('cls') # Limpar o Terminal .
os.system('color 3') # Mudança na cor das letras (Azul).

contador = 0
resultado = 0

# Recebendo 20 números e calculando as somas:
while contador != 20:
    numero = int(input("► %2d - Digite um numero: " %(contador+1)))
    contador += 1
    resultado += numero

print("\n• A soma dos 20 números é igual à %d." %resultado) # Imprimindo resultado.
