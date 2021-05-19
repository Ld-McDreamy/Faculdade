import random as rd

st = int(input("Digite o valor inicial: "))
fs = int(input("Digite o valor final: "))
numbers = []

qnt = int(input("Quantos números aleatórios? "))

for x in range(qnt):
    valor = rd.randint(st, fs)
    numbers.append(valor)

print("Números Sorteados: ", numbers)

############################################################

st2 = int(input("\n\nDigite o valor inicial: "))
fs2 = int(input("Digite o valor final: "))
numbers2 = []
par = []
impar = []

qnt2 = int(input("Quantos números aleatórios? "))

for x in range(qnt2):
    valor2 = rd.randint(st2, fs2)
    numbers2.append(valor2)
    if valor2 % 2 == 0:
        par.append(valor2)
    else:
        impar.append(valor2)
        

print("Números Sorteados: ", numbers2)
print("Números Pares: ", par)
print("Números Impares: ", impar)
