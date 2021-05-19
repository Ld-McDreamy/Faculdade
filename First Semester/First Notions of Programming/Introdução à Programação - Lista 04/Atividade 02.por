programa
{
	/*
	 * 	2. Faça um Programa que leia três números e mostre o maior e o menor
		deles.
	 */
	funcao inicio()
	{
		inteiro contador=1
		real n=0.0, maior=0.0, menor=0.0
		
		escreva("\n\t\tQual é o Maior e o Menor número?\n")
		
		enquanto(contador<=3){
			escreva("\n"+contador+" - Digite um número: ")
			leia(n)
			limpa()

			escreva("\n\t\tQual é o Maior e o Menor número?\n")
			
		se(contador==1){
			menor = n
			maior = n
			
		}senao{
			
			se(n>maior)
			maior = n
		
			se(n<=menor)
			menor = n
			
		}
		contador ++
	}
		
			
		escreva("\nO Maior Número é "+maior)
		escreva("\nO Menor Número é "+menor+"\n")
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 458; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */