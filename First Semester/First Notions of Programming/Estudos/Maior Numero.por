programa
{
	/*
	 * Faça um programa que leia 5 números e informe o maior número.
	 */
	funcao inicio()
	{
		inteiro contador=1
		real n=0.0, maior=0.0
		
		escreva("\n\t\tQual é o maior número?\n")
		
		enquanto(contador<=5){
			escreva("\t\nDigite um número: ")
			leia(n)
			limpa()
			escreva("\n\t\tQual é o maior número?\n")
			contador++
		
		se(n>maior){
				maior = n
				
			}
		}		
		
		escreva("\nO maior número entre os cinco escolhidos por você é: "+maior+".\n\n\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 385; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */