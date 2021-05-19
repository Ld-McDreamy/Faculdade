programa
{
	/* Faça um Programa que peça dois números e imprima o maior deles. */
	
	funcao inicio()
	{
		real n1, n2
		escreva("Digite um valor: ")
		leia(n1)

		limpa()

		escreva("Digite um segundo valor: ")
		leia(n2)

		limpa()

		se(n1>n2){
			
			escreva("O maior entre os dois valores é "+n1+".")
			
		}senao se(n1==n2){
			
			escreva("O dois valores são iguais, "+n1+".")
			
		}senao{
			
			escreva("O maior entre os dois valores é "+n2+".")
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 372; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */