programa
{
	
	funcao inicio()
	{
		real SalH, H, Sdia, SF
		cadeia nome
		escreva("\n// Quanto você ganha por mês? //")
		escreva("\n \n \n Qual é o seu nome: ")
		leia(nome)
		
		escreva("\n \n Quantos reais você ganha por hora, ", nome, ": R$")
		leia(SalH)

		escreva("\n \n ", nome, ", quantas horas você trabalha por dia: ")
		leia(H)

		limpa()

		// Processamento
		Sdia = SalH*H
		SF = Sdia*30

		escreva(nome, ", você recebe ao mês R$", SF, " reais." )
		escreva("\n\n\n    Obrigado, volte sempre! :)\n \n") 
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 278; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */