programa
{
	/*
	 	Elabore um algoritmo que solicite que o usuário entre com 10 números quaisquer. Ao final apresente separadamente:

			a. A soma dos 5º primeiros números digitados;

			b. A soma do 6º número até o 7º;

			c. A soma do 7º número até o 10º.
	 */

	real n, soma1=0.0, soma2=0.0, soma3=0.0
	funcao inicio()
	{
		para(inteiro i=1; i <= 10; i++){
			escreva(i," - Digite um número: ")
			leia(n)

			enquanto(i<=5){
				soma1 = soma1 + n
			}
			enquanto(i>5 e i<=7){
				soma2 = soma2 + n
				
			}
			enquanto(i>6 e i<=10){
				soma3 = soma3 + n
			}
		}
		escreva("\nResultado: \n\n",soma1,"\n",soma2,"\n",soma3"\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 523; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */