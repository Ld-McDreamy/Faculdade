programa
{		
		/*
		João Papo-de-Pescador, homem de bem, comprou um microcomputador
		para controlar o rendimento diário de seu trabalho. Toda vez que ele traz
		um peso de peixes maior que o estabelecido pelo regulamento de pesca
		do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por
		quilo excedente. João precisa que você faça um programa que leia a
		variável peso (peso de peixes) e calcule o excesso. Gravar na
		variável excesso a quantidade de quilos além do limite e na variável multa o
		valor da multa que João deverá pagar. Imprima os dados do programa
		com as mensagens adequadas. 
		*/
	
	funcao inicio()
	{
		real, peso, excesso, multa
		escreva("\n\t\t\t\t\t// João Papo-de-Pescador - Calculador de Peixe. //\n\n")
		escreva("\t• Qauntos quilos pesa o peixe: ")
		leia(peso)

		limpa()

		se (peso > 50)
		{
			excesso = peso - 50
			multa = excesso * 4
			escreva("\n\t\t\t\t\t// João Papo-de-Pescador - Calculador de Peixe. //\n\n")
			escreva("\t // Você ultrapassou o peso máximo estabelecido pelo estado de São Paulo em "+excesso+"Kg e pagará uma multa de R$"+multa+"\n\n")
		}
		senao
		{
			escreva("\n\t\t\t\t\t// João Papo-de-Pescador - Calculador de Peixe. //\n\n")
			escreva("\t // Parábens você está dentro do limite estabelecido pelo estado de São Paulo. Seu peixe pesa "+peso+"Kg \n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 621; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */