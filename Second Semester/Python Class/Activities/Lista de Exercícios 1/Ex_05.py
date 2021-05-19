'''

 5.Faça um programa para a leitura de duas notas parciais de um aluno.
 O programa deve calcular a média alcançada por aluno e apresentar:
 
 A mensagem "Aprovado", se a média alcançada for maior ou igual a seis;
 A mensagem "Reprovado", se a média for menor do que seis;
 A mensagem "Aprovado com Distinção", se a média for igual a dez.

'''
# Programa Recebe Notas.
nota1 = float(input("\n ► Digite a primeira nota: "))
nota2 = float(input(" ► Digite a segunda nota: "))

media = (nota1+nota2)/2



#Programa análisa a nota e informa se o Aluno foi aprovado ou não.
if media >= 6 and media != 10:
    print("\n╔═════════════════╗")
    print("║     APROVADO    ║")
    print("║  Média ✏  %.2f  ║" %media)
    print("╚═════════════════╝\n")
elif media == 10:
    print("\n╔═══════════════════════════╗")
    print("║   APROVADO COM DISTINÇÃO  ║")
    print("║       Média ✏  %.2f      ║" %media)
    print("╚═══════════════════════════╝\n")
else:
    print("\n╔═════════════════╗")
    print("║    REPROVADO    ║")
    print("║  Média ✏  %.2f  ║" %media)
    print("╚═════════════════╝\n")
