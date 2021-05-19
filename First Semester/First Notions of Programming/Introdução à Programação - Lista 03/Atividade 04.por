programa
{
	/*
	  Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
	empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total
	das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor,
	calcular e escrever o seu salário total.  
	*/
	funcao inicio()
	{
		real Sf, Vv, Vu, St, tresP, cincoP, Part1, Part2
		escreva("\n\t\t\t\t\t\t\t// Calcule o Salário Total //")
		escreva("\n\n\n\tValor do Salário Fixo: R$")
		leia(Sf)

		escreva("\n\tValor das vendas efetuadas: R$")
		leia(Vv)

		limpa()
		
	// Processamento
		tresP = 0.03
		cincoP = 0.05

	// Resultado
		se(Vv>1500){
			Vu = Vv-1500
			Part1 = 1500*tresP
			Part2 = Vu*cincoP
			St = Sf+Part1+Part2
			
			escreva("\n\t\t\t\t\t\t\t// Calcule o Salário Total //")
			escreva("\n\n\n\t\t\t\t\t\t    O Salário Total é igual à: R$"+St+"\n\n")
			
		}senao{
			Part1 = Vv*tresP
			St = Sf+Part1

			escreva("\n\t\t\t\t\t\t\t// Calcule o Salário Total //")
			escreva("\n\n\n\t\t\t\t\t\t    O Salário Total é igual à: R$"+St+"\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 874; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */