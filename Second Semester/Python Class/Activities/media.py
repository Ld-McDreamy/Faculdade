############### SISTEMAS DE NOTAS ###############

print("\n// Bem vindo(a) ao Sistema de Notas //\n")

# Recebimento de notas do usuário:
aprov = float(input("\tMédia de aprovação: "))
n1 = float(input("\n\tDigite a 1ª nota: "))
n2 = float(input("\tDigite a 2ª nota: "))
n3 = float(input("\tDigite a 3ª nota: "))

# Calculo de Média Artimética: 
media = (n1+n2+n3) / 3

# Condicional para informar Aprovação ou Reprovação do Aluno:
if media >= aprov:
    print("\n\tParabéns, você foi APROVADO.")
    print("\t\t %.2f" %(media)) #print("\t", media) -> Fica com várias casas
elif media >= 1:
    print("\n\tSinto muito, você foi REPROVADO.")
    print("\t\t    %.2f" %(media)) #print("\t", media) -> Fica com várias casas
else:
    print("\n\tMeu Deus, o quê você fez?") # Média muito abaixo do esperado.
    print("\t\t  %.2f" %(media)) #print("\t", media) -> Fica com várias casas

print("\nObrigado, volte sempre ;) \n")
