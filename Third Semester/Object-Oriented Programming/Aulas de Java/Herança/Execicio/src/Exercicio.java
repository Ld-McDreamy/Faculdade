
public class Exercicio {

	public static void main(String[] args) {
		String frase = "Eu Amo Minha Noiva Imensamente";
		
		// Quebra o texto e, m um array dependendo do caracter de sua preferencia:
		String [] arrayStr = frase.split(" ");
		int [] valor = {5, 6, 7, 8};
		
		// "str" seria cada palavra do array "arrayStr", cada varida o "str" será = ao conteúdo do array (uma palavra):
		for (String str: arrayStr) {
			System.out.println(str);
		}
		
		// Neste caso o "n" seria cada número do array "valor", cada varida o "n" será = ao conteudo do array (um número):
		for (int n: valor) {
			System.out.println(n);
		}
		
		System.out.println("\n" + arrayStr[2]);
		

	}

}
