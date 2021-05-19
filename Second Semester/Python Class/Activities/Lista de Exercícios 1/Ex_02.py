# 2.Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

num = int(input("\nDigite um número - Positivo ou Negativo: "))

if num > 0:
    print("\n ► %d -> É um número ** POSITIVO **\n" %num)
elif num < 0:
    print("\n ► %d -> É um número ** NEGATIVO **\n" %num)
else:
    print("\n ► %d -> É um número ** NÊUTRO **\n" %num)
