programa
{
	/*
	 	7. Faça um programa que leia 5 números e informe a soma e a média dos
		   números.
	 */

	real n, soma=0.0, media
	funcao inicio()
	{
		para(inteiro i=1; i <= 5; i++){
			escreva(i," - Digite um número: ")
			leia(n)
			
			soma = soma + n
		}
		
		media = soma / 5
		escreva("\nA soma dos 5 números é igual à: ",soma, "\nA média dos 5 números é igual à: ", media,"\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 198; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */