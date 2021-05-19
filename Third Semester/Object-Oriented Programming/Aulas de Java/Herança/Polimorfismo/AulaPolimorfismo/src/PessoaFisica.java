
public class PessoaFisica extends Pessoa {
	
	private long CPF;

	public long getCPF() {
		return CPF;
	}

	public void setCPF(long cPF) {
		CPF = cPF;
	}
	
	public String getNome() {
		return "Pessoa Física: " + super.getNome() + " - CPF: " + this.CPF;
	}
	

}
