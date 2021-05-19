'''

7.	As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores 
e lhe contraram para desenvolver o programa que calculará os reajustes.

o	Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
o	salários até R$ 280,00 (incluindo) : aumento de 20%
o	salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
o	salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
o	salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o	o salário antes do reajuste;
o	o percentual de aumento aplicado;
o	o valor do aumento;
o	o novo salário, após o aumento.

'''

# Começo do Programa.
print("\n\t╔═══════════════════════════╗")
print("\t║   Organizações Tabajara   ║")
print("\t║  SISTEMA - BEM-VINDO (A)  ║")
print("\t╚═══════════════════════════╝\n")

name = input("\n► Digite nome do colaborador(a): ")
salary = float(input("► Digite o salário: R$"))

if salary <= 280: # salários até R$ 280,00 (incluindo) : aumento de 20%
    percentage = 20
elif salary <= 700:# salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
    percentage = 15
elif salary <= 1500:# salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    percentage = 10
elif salary > 1500: # salários de R$ 1500,00 em diante : aumento de 5%
    percentage = 5

percentage /= 100.0 # Calcula a porcentagem.
increasement = salary * percentage # Calcula o aumento
new_salary = salary + increasement # Calcula o novo salário

print("\n\t\t• %s •\n" %name)
print("Sálario antes do reajuste: R$%.2f" %salary)
print("Aumento de %d%%" %int(percentage*100))
print("Aumeto de R$%.2f" %increasement)
print("Novo salário: R$%.2f\n" %new_salary)
