programa
{
	
	funcao inicio()
	{
		real n1, n2, soma, sub, div, multi
		
		// Entrada de Dados
		escreva("Digite o primeiro número: ")
		leia(n1)

		limpa()

		escreva("Digite o segundo número: ")
		leia(n2)

		limpa()
		
		// Processamento
		soma = n1+n2
		sub = n1-n2
		multi = n1*n2
		div = n1/n2
		
		// Resultado
		escreva(" ____________________ \n")
		escreva("|                    | \n")
		escreva("| Calculadora Básica | \n|   do Vinícius :D   | \n")
		escreva("|____________________| \n \n")
		escreva("====================== \n")
		escreva("        SOMA: \n \n", n1, " + ", n2, " = ", soma, "\n")
		escreva("====================== \n")
		escreva("      SUBTRAÇÃO: \n \n", n1, " - ", n2, " = ", sub, "\n")
		escreva("====================== \n")
		escreva("    MULTIPLICAÇÃO: \n \n", n1, " * ", n2, " = ", multi, "\n")
		escreva("====================== \n")
		escreva("       DIVISÃO: \n \n", n1, " / ", n2, " = ", div, "\n")
		escreva("====================== \n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 572; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */