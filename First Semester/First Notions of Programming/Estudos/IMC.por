programa
{
	inclua biblioteca Matematica --> mat
	
	real Peso, Altura, q, IMC, arredIMC
	funcao inicio()
	{
		escreva("Informe seu Peso: ")
		leia(Peso)
		limpa()

		escreva("Informe sua altura: ")
		leia(Altura)
		limpa()

		q = Altura*Altura
		IMC = Peso/q
		arredIMC = mat.arredondar(IMC, 2)

		se(IMC<18.5){
			escreva("\n\t╔══════════════════════════════════════════╗\n")
			escreva("\t║ Você está Abaixo do Peso | IMC = "+arredIMC+" | ║\n")
			escreva("\t╚══════════════════════════════════════════╝\n\n")
		}senao se(IMC<=24.9){
			escreva("\n\t╔═════════════════════════════════════════════╗\n")
			escreva("\t║ Você está com o Peso Normal | IMC = "+arredIMC+" | ║\n")
			escreva("\t╚═════════════════════════════════════════════╝\n\n")			
		}senao se(IMC<=29.9){
			escreva("\n\t╔═════════════════════════════════════════╗\n")
			escreva("\t║ Você está com Sobrepeso | IMC = "+arredIMC+" | ║\n")
			escreva("\t╚═════════════════════════════════════════╝\n\n")
		}senao se(IMC<=34.9){
			escreva("\n\t╔════════════════════════════════════════════════╗\n")
			escreva("\t║ Você está com Obesidade Grau 1 | IMC = "+arredIMC+" | ║\n")
			escreva("\t╚════════════════════════════════════════════════╝\n\n")
		}senao se(IMC<=39.9){
			escreva("\n\t╔════════════════════════════════════════════════╗\n")
			escreva("\t║ Você está com Obesidade Grau 2 | IMC = "+arredIMC+" | ║\n")
			escreva("\t╚════════════════════════════════════════════════╝\n\n")
		}senao{
			escreva("\n\t╔═════════════════════════════════════════════╗\n")
			escreva("\t║ Você está com Obesidade Grau 4. IMC = "+arredIMC+" ║\n")
			escreva("\t╚═════════════════════════════════════════════╝\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1354; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */