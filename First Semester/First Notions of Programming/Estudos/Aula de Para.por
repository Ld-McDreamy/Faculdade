programa
{
	inteiro n1, n2, s=0
	funcao inicio()
	{
		escreva("Digite n1: ")
		leia(n1)
		escreva("Digite n2: ")
		leia(n2)
		
		para(inteiro i=(n1+1); i < n2; i++){
			escreva("\n"+i)
			s = s + i
		}
		escreva("\n\nSoma ="+s)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 227; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */