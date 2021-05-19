# 4. Faça um programa que peça dois números, base e expoente,
# calcule e mostre o primeiro número elevado ao segundo número.
# Não utilize a função de potência da linguagem.

import os
os.system('cls') # Limpar o Terminal .
os.system('color 3') # Mudança na cor das letras (Azul).

cont = 0


base = int(input("\n► Digite um número (base): ")) # Entrada do Usuário (base).
expoente = int(input("► Digite outro número (expoente): ")) # Entrada 2 do Usuário (expoente).
resultado = base

# Calculando a potência:
while cont < (expoente-1):
    resultado *= base
    cont += 1

print("\n■ O número %d elevado à %d = %d" %(base, expoente, resultado)) # Imprimindo resultados.
