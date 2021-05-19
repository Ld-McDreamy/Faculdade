programa
{ 	/*
	As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. 
	Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra
	*/

	inteiro M
	real Pt, P=1.30
	funcao inicio()
	{
		escreva("\nQuantidade de maçãs compradas: ")
		leia(M)
		limpa()

		enquanto(M < 0){
			escreva("\n||Quantidade Inválida||\n\nDigite novamente a quantidade de maçãs compradas: ")
			leia(M)
			limpa()
		}
		
		se(M >= 12){
			P = 1.00
			Pt = M * P
		
		}senao{
			Pt = M * P
		
		}

		escreva("\n\nO custo total da compra é igual à: R$",Pt,"\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 366; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */