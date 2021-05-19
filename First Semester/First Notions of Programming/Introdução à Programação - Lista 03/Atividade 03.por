programa
{
	/* 
	Faça um programa para a leitura de duas notas parciais de um aluno. O
	programa deve calcular a média alcançada por aluno e apresentar:
	• A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
	• A mensagem "Reprovado", se a média for menor do que sete;
 	*/
	funcao inicio()
	{
		real n1, n2, soma, media
		escreva("\n\t\t\t\t\t\t\t// Calcule a Média //")
		escreva("\n\n\tDigite a primeira nota do aluno(a): ")
		leia(n1)

		escreva("\n\tDigite a segunda nota do aluno(a): ")
		leia(n2)

		limpa()

		// Calculo da Média
		soma = n1+n2
		media = soma/2

		// Resultado
		se(media>=7){
			escreva("\n\t\t\t\t\t\t\t// Calcule a Média //")
			escreva("\n\n\n\t\t\t\t\t\t\t       Aprovado.")
			escreva("\n\t\t\t\t\t\t\t       Nota: "+media+"\n\n")
		}senao{
			escreva("\n\t\t\t\t\t\t\t// Calcule a Média //")
			escreva("\n\n\n\t\t\t\t\t\t\t       Reprovado.")
			escreva("\n\t\t\t\t\t\t\t       Nota: "+media+"\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 556; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */