programa
{
	
	funcao inicio()
	{
		real nt1, nt2, nt3, nt4, media
		escreva("Nota referente ao Primeiro Bimestre: ")
		leia(nt1)
		limpa()

		escreva("Nota referente ao Segundo Bimestre: ")
		leia(nt2)
		limpa()

		escreva("Nota referente ao Terceiro Bimestre: ")
		leia(nt3)
		limpa()

		escreva("Nota referente ao Quarto Bimestre: ")
		leia(nt4)
		limpa()

		media = (nt1+nt2+nt3+nt4)/4

		escreva("\nPrimeiro Bimestre: Nota ", nt1)
		escreva("\nSegundo Bimestre: Nota ", nt2)
		escreva("\nTerceiro Bimestre: Nota ", nt3)
		escreva("\nQuarto Bimestre: Nota ", nt4)		
		escreva("\n \nA Média Final foi: ", media, "\n \n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 594; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */