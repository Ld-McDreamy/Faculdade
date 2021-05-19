programa
{
	/*
		8. Faça um programa que peça uma nota, entre zero e dez. Mostre uma
		   mensagem caso o valor seja inválido e continue pedindo até que o
		   usuário informe um valor válido.

	 */

	inteiro nota
	funcao inicio()
	{	
		escreva("\nDigite uma nota de 0-10: ")
		leia(nota)
		limpa()
		
		enquanto(nota<0 ou nota>10){
			escreva("\n   // Valor Inválido //\n\nDigite uma nota de 0-10: ")
			leia(nota)
			limpa()
		}
		escreva("\nNota digitada = ",nota,"\n")
		
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 472; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */