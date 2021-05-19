nome = input("Qual é o seu nome? ")
sobrenome = input("Qual é o seu sobrenome? ")

print("Bem-vindo " + nome + " " + sobrenome) #Opção 1
print("Bem-vindo", nome, sobrenome) #Opção 2
print("\n")
#################################################################

v1 = input("Digite um valor: ")
v2 = input("Digite outro valor: ")

resultado = v1 + v2
print(resultado)

#Deu errado né? ele leu string, vem ver como resolve

v11 = int(input("Digite um valor: "))
v21 = int(input("Digite outro valor: "))

resultado1 = v11 + v21
print(resultado1)

# ou...

resultado2 = int(v11) + int(v21)
print(resultado2)