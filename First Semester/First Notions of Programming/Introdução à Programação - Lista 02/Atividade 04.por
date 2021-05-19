programa
{		
		/*
		Faça um Programa que pergunte quanto você ganha por hora e o número
		de horas trabalhadas no mês. Calcule e mostre o total do seu salário no
		referido mês, sabendo-se que são descontados 11% para o Imposto de
		Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos
		dê:
		a. salário bruto.
		b. quanto pagou ao INSS.
		c. quanto pagou ao sindicato.
		d. o salário líquido.
		e. calcule os descontos e o salário líquido, conforme a tabela abaixo:
		*/
	
	funcao inicio()
	{
		real SalH, H, Sdia, SB, Si, Sir, Ss, SL
		cadeia nome
		escreva("\n\t\t\t\t\t// Calculadora de Salário Liquído. //\n\n")
		escreva("\n\n\t • Qual é o seu nome: ")
		leia(nome)
		
		escreva("\n\t • Quantos reais você ganha por hora, ", nome, ": R$")
		leia(SalH)

		escreva("\n\t • ", nome, ", quantas horas você trabalha por dia: ")
		leia(H)

		limpa()

		// Processamento - Salário Bruto.
		Sdia = SalH * H
		SB = Sdia * 30
		
		// Processamento - Descontos.
		Si = SB * 0.08
		Sir = SB * 0.11
		Ss = SB * 0.05
		
		// Procesamento - Salário Liquído.
		SL = SB - (Si+Sir+Ss)

		// Saída.
		
		escreva("\n\t > ", nome, ", aqui está o Resultado:")
		escreva("\n\n\t • (+) Salário Bruto = R$", SB)
		escreva("\n\t • (-) Desconto de 11% do Imposto de Renda = R$", Sir)
		escreva("\n\t • (-) Desconto de 8% do INSS = R$", Si)
		escreva("\n\t • (-) Desconto de 5% do Sindicato = R$", Ss)
		escreva("\n\t • (=) Salário Liquído = R$", SL)
		escreva("\n\n\t\t    Obrigado, volte sempre! :)\n\n") 
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 302; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */