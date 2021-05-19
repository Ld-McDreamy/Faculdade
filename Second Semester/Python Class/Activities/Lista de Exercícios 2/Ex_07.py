# 7. Faça um programa que imprima na tela apenas os números ímpares entre dos valores recebidos.

import os
os.system('cls') # Limpar o Terminal.
os.system('color 2') # Mudança na cor das letras (Verde).

numero_1 = int(input("\n► Digite o primeiro número: ")) # Entrada inicial do Usuário.
numero_2 = int(input("► Digite o último número: ")) # Entrada final do Usuário.

if numero_1 > numero_2:
    base = numero_1 # Marcando o primeiro número para inverter.
    # Invertendo as Posições.
    numero_1 = numero_2
    numero_2 = base

if numero_1 % 2 == 0: # Se o primeiro número for par, deve imprimir o próximo número e os resto que é ímpar.
    for impares in range((numero_1+1), (numero_2+1), 2):
        print("▌ %3d ▌" %(impares))
else: # Se o primeiro número for ímpar, deve imprimir o número e os resto que é ímpar.
    for impares in range(numero_1, (numero_2+1), 2):
        print("▌ %3d ▌" %(impares))
