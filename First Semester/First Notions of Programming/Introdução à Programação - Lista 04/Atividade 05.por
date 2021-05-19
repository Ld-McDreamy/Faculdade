programa
{
	/*
	 	5. Faça um Programa que peça um número inteiro e determine se ele é par
		   ou impar. Dica: utilize o operador módulo (resto da divisão).
	 */
	inteiro n, cf 
	funcao inicio()
	{
		escreva("\n\tDigite um número: ")
		leia(n)
		limpa()
		
		cf = n % 2
		
		se(cf==0){
			escreva("\n\tO número ", n, " é Par.\n")
			
		}senao{
			escreva("\n\tO número ", n, " é Impar.\n")
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 387; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */