programa
{
	/*
	 	4. 	Faça um Programa que pergunte em que turno você estuda. Peça para
			digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem
			"Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o
			caso.

	 */
	caracter c
	
	funcao inicio()
	{
		escreva("\n\tEm qual turno você estuda?\n\nM - Para Matutino.\nV - Para Vespertino.\nN - Para Noturno.\n\nDigite: ")
		leia(c)
		limpa()

		escolha(c){
			caso 'N':
				escreva("Oiiii")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 425; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */