programa
{
	/* Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo. */
	
	funcao inicio()
	{
		real n
		escreva("\n\t\t\t\t// Esse número é Positivo ou Negativo? //")
		escreva("\n\nDigite um valor: ")
		leia(n)

		limpa()

		se(n>=0){
			escreva("\n\t\t\t\t// Esse número é Positivo ou Negativo? //")
			escreva("\n\nO número "+n+" é Positivo.\n\n")
			
		}senao{
			escreva("\n\t\t\t\t// Esse número é Positivo ou Negativo? //")
			escreva("\n\nO número "+n+" é Negativo.\n\n")
			
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 513; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */