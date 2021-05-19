programa
{
	/*
	 * Faça um algoritmo para ler: quantidade atual em estoque, quantidade
	máxima em estoque e quantidade mínima em estoque de um produto.
	Calcular e escrever a quantidade média ((quantidade média =
	quantidade máxima + quantidade mínima)/2). Se a quantidade em
	estoque for maior ou igual a quantidade média escrever a mensagem
	'Não efetuar compra', senão escrever a mensagem 'Efetuar compra'.
	 */
	funcao inicio()
	{
		real Eatual, Emax, Emin, Qmedia
		
		escreva("\t\t\t\t\t\t// ✎ Necessidade de repor estoque ™ // ")
		escreva("\n\n\t• Quantidade ATUAL em estoque: ")
		leia(Eatual)
		
		escreva("\t• Quantidade MÁXIMA em estoque: ")
		leia(Emax)

		escreva("\t• Quantidade MÍNIMA em estoque: ")
		leia(Emin)

		limpa()
	
	// Processamento
		Qmedia = (Emax+Emin)/2

	// Saída
		se(Eatual>=Qmedia){
			escreva("\t\t\t\t\t\t// ✎ Necessidade de repor estoque ™ // ")
			escreva("\n\n\t\t\t\t\t\t\tQuantidade Média = "+Qmedia)
			escreva(" \n\t\t\t\t\t\t\t ✘ Não efetuar compra.\n\n")
			escreva("\n\t\t\t\t\t\t\t ──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▌")
			escreva("\n\t\t\t\t\t\t\t ───▄▄██▌█            ▐")
			escreva("\n\t\t\t\t\t\t\t ▄▄▄▌▐██▌█            ▐")
			escreva("\n\t\t\t\t\t\t\t ███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▌")
			escreva("\n\t\t\t\t\t\t\t ▀❍▀▀▀▀▀▀▀❍❍▀▀▀▀▀▀❍❍▀▀▀ \n\n")	
			
		}senao{
			escreva("\t\t\t\t\t\t// ✎ Necessidade de repor estoque ™ // ")
			escreva("\n\n\t\t\t\t\t\t\tQuantidade Média = "+Qmedia)
			escreva(" \n\t\t\t\t\t\t\t   ✔ Efetuar compra.\n\n")
			escreva("\n\t\t\t\t\t\t\t ──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▌")
			escreva("\n\t\t\t\t\t\t\t ───▄▄██▌█░░░░░░░░░░░░░░")
			escreva("\n\t\t\t\t\t\t\t ▄▄▄▌▐██▌█░░░░░░░░░░░░░░")
			escreva("\n\t\t\t\t\t\t\t ███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▌   ░░")
			escreva("\n\t\t\t\t\t\t\t ▀❍▀▀▀▀▀▀▀❍❍▀▀▀▀▀▀❍❍▀▀▀ \n\n")
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1268; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */