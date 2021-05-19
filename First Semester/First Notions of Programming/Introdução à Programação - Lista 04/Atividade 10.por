programa
{
	/*	
	 	10.Altere o programa anterior para mostrar no final a soma dos números.
	 */
	inteiro n1, n2, Ri, Rf, int, soma
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
		soma = Ri
		escreva("\n\t// Intervalo entre dois Números Inteiros. //\n\n")
		
		enquanto(int<Rf){
			escreva(int+", ")
			int++
			soma = soma + int
		}
		
		escreva(Rf+".")
		escreva("\n\nA soma dos seus números é igual à: "+soma+".\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 660; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */