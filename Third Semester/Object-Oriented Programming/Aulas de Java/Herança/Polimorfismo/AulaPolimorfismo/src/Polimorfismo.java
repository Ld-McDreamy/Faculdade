
public class Polimorfismo {

	public static void main(String[] args) {
		
		// Pessoa fisica = new PessoaJuridica();
		// fisica.setNome("Nolberto");
		
		PessoaFisica pFisica = new PessoaFisica();
		PessoaJuridica pJuridica = new PessoaJuridica();
		
		pFisica.setNome("Carlos Alberto");
		pFisica.setCPF(23568965135L); // long coloca L no final
		
		pJuridica.setNome("A Praça é Nossa");
		pJuridica.setCNPJ(13516498465413L); // long coloca L no final
											// float coloca f no final
		
		// Array
		Pessoa[] pessoas = new Pessoa[2];
		pessoas[0] = pFisica;
		pessoas[1] = pJuridica;
		
		// A Mágia Acontece Agora:
		// Para cara interação, p será uma pessoa do Array pessoas -- Nem prescisa do pessoas[p]
		for(Pessoa p: pessoas) {
			System.out.println(p.getNome());
		}
		
		// Casting - Exemplo: (int) variavel_que_n_é_int
		Pessoa pFisica1 = new PessoaFisica();
		pFisica1.setNome("Irineu");
		PessoaFisica pFisica2 = (PessoaFisica) pFisica1;
		pFisica2.setCPF(1213156454L);
		System.out.println(pFisica2.getNome());
	}

}
