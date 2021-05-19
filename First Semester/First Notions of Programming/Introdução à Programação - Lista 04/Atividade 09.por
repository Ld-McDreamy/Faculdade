programa
{
	/*
		9.   Faça um programa que receba dois números inteiros e gere os números
			inteiros que estão no intervalo compreendido por eles.
	 */
	 
	inteiro n1, n2, Ri, Rf, int
	funcao inicio()
	{
		escreva("\n\t// Intervalo entre dois Números Inteiros. //\n\n")
		escreva("Digite o Primeiro Valor: ")
		leia(n1)
		escreva("Digite o Segundo Valor: ")
		leia(n2)
		limpa()

		se(n1>n2){
			Ri = n2
			Rf = n1
		}senao se(n1<n2){
			Ri = n1
			Rf = n2
		}
		
		int = Ri
		escreva("\n\t// Intervalo de dois Números Inteiros. //\n\n")
		
		enquanto(int<Rf){
			escreva(int+", ")
			int++
		}
		
		escreva(Rf+".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 616; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */