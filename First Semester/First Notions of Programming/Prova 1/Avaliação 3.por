programa
{	/*
	Escrever um algoritmo que lê as 3 notas obtidas por um aluno nas 3 verificações(Nota1, Nota2, Nota3)
	e a média dos exercícios (ME) que fazem parte da avaliação. O programa deve pedir uma nota, entre zero e dez.
	Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

 			Calcular a média de aproveitamento, usando a fórmula:

			MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7

			A atribuição de conceitos obedece a tabela abaixo:
	*/

	real n1=-1.0, n2=-1.0, n3=-1.0, ME, MA
	funcao inicio()
	{
		enquanto(n1<0 ou n1>10){
			escreva("Primeira Nota: ")
			leia(n1)
		}
		enquanto(n2<0 ou n2>10){
			escreva("Segunda Nota: ")
			leia(n2)
		}
		enquanto(n3<0 ou n3>10){
			escreva("Terceira Nota: ")
			leia(n3)
		}
		
		ME = (n1 + n2 + n3) / 3
		MA = (n1 + n2 * 2 + n3 * 3 + ME)/7

		se(MA >= 9){
			 escreva("\nConceito: A - Resultado: ",MA)
			 
		}senao se(MA>=7.5 e MA<9){
			escreva("\nConceito: B - Resultado: ",MA)
			
		}senao se(MA>=6 e MA<7.5){
			escreva("\nConceito: C - Resultado: ",MA)
			
		}senao se(MA>=4 e MA<6){
			escreva("\nConceito: D - Resultado: ",MA)
			
		}senao se(MA<4){
			escreva("\nConceito: E - Resultado: ",MA)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 724; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */