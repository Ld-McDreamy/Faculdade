# 6.Faça um Programa que leia três números e mostre o maior e o menor deles.

n1 = float(input("\n ► Digite um primeiro número: "))
n2 = float(input(" ► Digite um segundo número: "))
n3 = float(input(" ► Digite um terceiro número: "))
 

if n1 > n2 and n1 > n3:
    maior = n1
    if n2 > n3:
        menor = n3
    elif n3 > n2:
        menor = n2
elif n2 > n1 and n2 > n3:
    maior = n2
    if n1 > n3:
        menor = n3
    elif n3 > n1:
        menor = n1
else:
    maior = n3
    if n1 > n2:
        menor = n2
    elif n2 > n1:
        menor = n1

print("\n\tO MAIOR número é: %.2f\n\tO MENOR número é: %.2f" %(maior, menor))
