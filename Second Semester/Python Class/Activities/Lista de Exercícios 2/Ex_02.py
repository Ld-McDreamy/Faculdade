#   2.	Faça um programa que leia 5 números e informe a soma e a média dos números

cont = 0
soma = 0
media = 0

while cont < 5:
    num = float(input("► Digite um número: "))
    soma = soma+num
    cont += 1
media = soma/cont

print("\n ■ A Soma dos números é igual à: %.2f" %soma)
print(" ■ A Média é igual à: %.2f" %media)
