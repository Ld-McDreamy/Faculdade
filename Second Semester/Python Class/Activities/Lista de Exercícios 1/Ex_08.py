# 8.	Faça um Programa que leia um número e exiba o dia correspondente da semana.
# (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido

week = int(input("\nDigite um número (1 - 7): "))

if week == 1:
    print("\n\n%d - Domingo.\n" %week)
elif week == 2:
    print("\n\n%d - Segunda.\n" %week)
elif week == 3:
    print("\n\n%d - Terça.\n" %week)
elif week == 4:
    print("\n\n%d - Quarta.\n" %week)
elif week == 5:
    print("\n\n%d - Quinta.\n" %week)
elif week == 6:
    print("\n\n%d - Sexta.\n" %week)
elif week == 7:
    print("\n\n%d - Sabádo.\n" %week)
else:
    print("\n\n%d - Valor Inválido.\n" %week)
