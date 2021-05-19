import random as luck

number_rand = luck.randint(0,10)
number_user = int(input("\n > Digite um número (0-10): "))

while number_rand != number_user:
    print("Seu número é %d? --- ✘" %number_rand)
    number_rand = luck.randint(0,10)

print("O número é %d --- ✔" %number_rand)