programa
{
	
	funcao inicio()
	{
		real b, h, A, A2
		escreva("\n// Seja Bem-vindo ao calculador de área de quadrados. // \n \n")
		escreva("\nPor favor, informe o tamanho da base do seu quadrado: ")
		leia(b)

		limpa()

		escreva("\n// Seja Bem-vindo ao calculador de área de quadrados. // \n \n")
		escreva("\nPor favor, informe o tamanho da altura do seu quadrado: ")
		leia(h)

		limpa()
		
		//Processamento
		A = b*h
		A2 = A*2

		
		escreva("O seu quadrado de base ", b, " e altura ", h, " possui uma área de ", A)
		escreva("\n\t    O dobro dessa área é igual à ", A2)
		escreva("\n\n\n                 Obrigado, volte sempre! :)\n \n") 
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 542; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */