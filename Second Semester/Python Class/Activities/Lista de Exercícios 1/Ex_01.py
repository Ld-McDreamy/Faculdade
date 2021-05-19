# 1. Faça um Programa que peça dois números e imprima o menor deles.

n1 = int(input("\nDigite um numéro: "))
n2 = int(input("Digite outro número: "))

if n1 < n2:
    menor = n1
else:
    menor = n2

print("\nMenor número -> %d" %menor)
