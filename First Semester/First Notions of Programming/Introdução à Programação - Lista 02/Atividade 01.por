programa
{ 		
		/* 
		Tendo como dados de entrada a altura de uma pessoa, construa um
		algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
		(72.7*altura) – 58
		*/
	inclua biblioteca Matematica --> mat
		
	funcao inicio()
	{
		real alt, pid, Res
		escreva("\n\t\t\t\t\t// Descubra qual é o peso ideal para a sua altura. //\n\n")
		escreva("\t• Informe qual é a sua altura: ")
		leia(alt)

		limpa()

		pid = (72.7*alt) - 58
		Res = mat.arredondar(pid, 2)

		escreva("\n\t\t\t\t\t// Descubra qual é o peso ideal para a sua altura. //\n\n")
		escreva("\t\t• O peso ideal para a sua altura de "+alt+"m é "+Res+"Kg.\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 180; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */