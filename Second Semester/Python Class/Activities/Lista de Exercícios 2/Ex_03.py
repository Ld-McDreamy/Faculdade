# 3. Faça um programa que receba dois números inteiros e gere os números inteiros 
# que estão no intervalo compreendido por eles.

import os
os.system('cls') # Limpar o Terminal.
os.system('color 2') # Mudança na cor das letras (Verde).

cont_start = int(input("\n► Digite o primeiro número: ")) # Entrada inicial do Usuário.
cont_end = int(input("► Digite o último número: ")) # Entrada final do Usuário.

if cont_start > cont_end:
    base = cont_start # Marcando o primeiro número para inverter.
    # Invertendo as Posições.
    cont_start = cont_end
    cont_end = base

print("") # Espaço

# Imprimindo números que estão entre os escolhidos pelo usuário.
for num in range(cont_start+1, cont_end):
    print("\t%d" %num)
