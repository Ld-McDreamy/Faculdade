programa
{		
		/* 
		Tendo como dado de entrada a altura (h) de uma pessoa, construa um
		algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
		a. Para homens: (72.7*h) - 58
		b. Para mulheres: (62.1*h) - 44.7 
		*/
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real alt, PidM, PidF, ResM, ResF
		cadeia sex
		escreva("\n\t\t\t\t\t// Descubra qual é o peso ideal para a sua altura. //\n\n")
		escreva("\t• Informe qual é o sexo: ")
		leia(sex)
		escreva("\t• Informe qual é a sua altura: ")
		leia(alt)

		limpa()

		PidM = (72.7*alt) - 58
		PidF = (62.1*alt) - 44.7

		ResM = mat.arredondar(PidM, 2)
		ResF = mat.arredondar(PidF, 2)

		se (sex == "Masculino" ou sex == "masculino" ou sex == "M"  ou sex == "m") 
		{
			escreva("\n\t\t\t\t\t// Descubra qual é o peso ideal para a sua altura. //\n\n")
			escreva("\n\t\t\t• O peso ideal para um homem da sua altura de "+alt+"m é "+ResM+"Kg.\n\n")
		}
		
		se (sex == "Feminino" ou sex == "feminino" ou sex == "F" ou sex == "f")
		{
			escreva("\n\t\t\t\t\t// Descubra qual é o peso ideal para a sua altura. //\n\n")
			escreva("\n\t\t\t• O peso ideal para uma mulher da sua altura de "+alt+"m é "+ResF+"Kg.\n\n")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1201; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */