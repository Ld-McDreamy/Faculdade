programa
{
	/*
	 	3.   Faça um programa que pergunte o preço de três produtos e informe qual
			produto você deve comprar, sabendo que a decisão é sempre pelo mais
			barato.
	 */

	inteiro contador=1, qp
	real p=0.0, pm=0.0
	
	funcao inicio()
	{
		enquanto(contador<=3){
			escreva("\n\tQual produto é o mais barato?\n")
			escreva("\nPreço do "+contador+"º produto: R$")	
			leia(p)
			limpa()

			se(contador==1){
				pm = p
				qp = contador
				
			}senao se(p<pm){
				pm = p
				qp = contador
			}
			
			contador ++
		}
		escreva("\n\tQual produto é o mais barato?\n")
		escreva("\nO produto mais barato é o "+qp+"º que custa R$"+pm+"\n\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 508; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */