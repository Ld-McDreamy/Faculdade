#   1.	Faça um programa que peça uma nota, entre zero e dez.
#   Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário
#   informe um valor válido.

grade = float(input("\nDigite uma nota: "))

while grade < 0 or grade > 10:
    print("\n\t// Valor Inválido //")
    grade = float(input("\nDigite uma nota (0-10): "))

print("\n\t Nota = %.2f" %grade)
