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
		escreva("O resultado da soma de ", n1, " + ", n2, " é igual à: ", soma, "\n", "\n")
		escreva("O resultado da subtração de ", n1, " - ", n2, " é igual à: ", sub, "\n", "\n")
		escreva("O resultado da multiplicação de ", n1, " * ", n2, " é igual à: ", multi, "\n", "\n")
		escreva("O resultado da divisão de ", n1, " / ", n2, " é igual à: ", div, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 186; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */