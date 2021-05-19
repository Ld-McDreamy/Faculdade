import random as rd

st = int(input("Digite o valor inicial: "))
fs = int(input("Digite o valor final: "))
numbers = []

qnt = int(input("Quantos números aleatórios? "))

for x in range(qnt):
    valor = rd.randint(st, fs)
    print(valor)
    if valor == 20:
        valor = "Não pode"
    numbers.append(valor)


print("Números Sorteados: ", numbers)
