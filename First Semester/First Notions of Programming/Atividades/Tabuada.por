programa
{
	/*
	 * 	Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. 
	 * 	O usuário deve informar de qual numero ele deseja ver a tabuada.
	 */
	inteiro n=0, r=0
	funcao inicio()
	{
		escreva("\n // Gerador de Tabuada. //\n\n")
		enquanto(n < 1 ou n > 10){
			escreva("Digite um valor de 1 à 10: ")
			leia(n)
		}
		escreva("\nA tabuada do número ",n," é:\n")
		
		para(inteiro i=1; i <= 10; i++){
			r = n*i
			escreva("\n",n," x ",i," = ",r)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 360; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */