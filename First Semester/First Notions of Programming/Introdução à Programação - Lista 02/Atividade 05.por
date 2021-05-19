programa
{	
	/*
	Faça um programa para uma loja de tintas. O programa deverá pedir o 
	tamanho em metros quadrados da área a ser pintada. Considere que a
	cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta
	é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário
	a quantidades de latas de tinta a serem compradas e o preço total.
	*/
	
	funcao inicio()
	{
		real m, l, P, Lata, t, Pa
		escreva("\t\t\t\t\t// ViniColor - Sistema de Tintas. //\n\n")
		escreva("\t\t\t\t\t\t // Bem-Vindo(a). //\n\n")
		escreva("\n\t • Quantos metros quadrados da àrea serão pintados: ")
		leia(m)
		limpa()
		
		// Processamento
		
		l = m / 3
		Lata = l / 18
		P = Lata * 80

			 
		//Saída
		escreva("\t\t\t\t\t    // ViniColor - Sistema de Tintas. //\n\n")
		escreva("\n\t\tSerão necessárias ", Lata, " latas de tinta para cobrir ", m, " metros quadrados da área.")
		escreva("\n\t\t\t\t\t     Valor Total: R$", P, "\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 740; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */