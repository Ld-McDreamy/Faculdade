programa
{
	// Faça um algoritmo que leie o salário e atualize de acordo com a tabela. //

	cadeia nome
	real salario, a
	
	funcao inicio()
	{
		escreva("\nBem vindo, Qual é o seu nome?\n\nDigite: ")
		leia(nome)
		limpa()

		escreva("\nOlá, "+nome+"! Qual é o seu salário?\n\nDigite: R$")
		leia(salario)
		limpa()

		se(salario<=600){
			a = salario * 0.30
			salario = salario + a
			
		}senao se(salario<=1100){
			a = salario * 0.25
			salario = salario + a
			
		}senao se(salario<=2400){
			a = salario * 0.20
			salario = salario + a
			
		}senao se(salario<=3550){
			a = salario * 0.15
			salario = salario + a
		}senao se(salario>3550){
			a = salario * 0.10
			salario = salario + a
		}
		
		escreva("\nPois bem "+nome+", seu salário teve um ajuste de R$"+a+".\nSeu novo salário é R$"+salario+".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 315; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */