programa
{
	
	funcao inicio()
	{
		real PI, r, A, r2
		escreva("\n// Seja Bem-vindo ao calculador de área de círculos // \n \n")
		escreva("    Por favor, informe o raio do seu círculo: ")
		leia(r)

		limpa()
		// PI = 3.14 || Ao quadrado = n * n
		PI = 3.14
		r2 = r*r
		A = PI*r2

		escreva("\nA área do seu círculo que possui um raio de ", r, " é igual à ", A, ".")
		escreva("\n\n\n               Obrigado, volte sempre! :)\n \n") 
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 184; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */