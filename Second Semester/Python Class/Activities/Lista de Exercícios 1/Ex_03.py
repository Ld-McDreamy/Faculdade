# 3.Faça um Programa que peça um número inteiro e determine se ele é par ou ímpar.
#   Dica: utilize o operador módulo (resto da divisão).

n = int(input("\n ✎  Digite um número: "))

if n % 2 == 0:
    print("\n ► O número %d é PAR.\n" %n)
else:
    print("\n ► O número %d é ÍMPAR.\n" %n)
