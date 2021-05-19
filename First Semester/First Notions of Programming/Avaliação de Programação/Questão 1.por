programa
{	/*
	A granja Frangotech possui um controle automatizado de cada frango da sua produção. 
	No pé direito do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar 
	o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, 
	faça um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. 
	Apresente também o valor de imposto que é referente a 15% do valor total.
	*/

	inteiro Gal, Ai, Aa
	real PAi, PAa, Juros=0.15, TJ, T
	funcao inicio()
	{
		escreva("\nQuantidade de galinhas na granja: ")
		leia(Gal)
		limpa()
		
		//P1
		Ai = Gal
		Aa = Gal * 2
		//P2
		PAi = Ai * 4.0
		PAa = Aa * 3.5

		T = PAi + PAa
		TJ = T * Juros

		escreva("\nSerão necessários ",Ai," Anéis de Indentificação, que custará R$",PAi)
		escreva("\n\nSerão necessários ",Aa," Anéis de Alimento, que custará R$",PAa,"\n\n")
		escreva("O gasto total será de: R$",T,", com o juros de R$",TJ," (15%), ficará R$",(TJ+T))
		
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1006; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */