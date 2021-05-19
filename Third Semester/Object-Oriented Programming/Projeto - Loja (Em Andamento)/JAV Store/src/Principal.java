
public class Principal {

	public static void main(String[] args) {
		Cliente cli1 = new Cliente("Pennywise", "97253673832", "00000000", 45639);
		Gerente g1 = new Gerente("Ed Sheeran", "81090485875", "17091991", 13634, 2, "Música", "Domingo");
		
		System.out.println("> Nome: " + cli1.getNome() + "\n> Nascido em: " + cli1.getDataNasc() + "\n> CPF: " + cli1.getCPF() + "\n");
		System.out.println("> Nome: " + g1.getNome() + "\n> Nascido em: " + g1.getDataNasc() + "\n> CPF: " + g1.getCPF() + "\n> Departamento: " + g1.getDepartamento());

	}

}
