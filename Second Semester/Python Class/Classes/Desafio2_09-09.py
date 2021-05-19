import random as rd

st = int(input("Digite o valor inicial: "))
fs = int(input("Digite o valor final: "))
numbers = []

qnt = int(input("Quantos números aleatórios? "))

for x in range(qnt):
    valor = rd.randint(st, fs)
    numbers.append(valor)

print("Números Sorteados: ", numbers)

# Mostrando em ordem inversa:
for y in range(len(numbers), 0, -1):
    print(numbers[y-1])

