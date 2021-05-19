# 4.Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
# Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido (Utilize elif).

sex = input("\n Qual é o seu sexo? (M/F) \n✎ Escreva aqui: ")

if sex == 'M' or sex == 'm':
    print("\n Sexo informado --> Masculino ♂\n")
elif sex == 'F' or sex == 'f':
    print("\n Sexo informado --> Feminino ♀\n")
else:
    print("\n✘ Sexo Inválido...")
