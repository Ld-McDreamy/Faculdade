
public class PessoaJuridica extends Pessoa {
	
	private long CNPJ;

	public long getCNPJ() {
		return CNPJ;
	}

	public void setCNPJ(long cNPJ) {
		CNPJ = cNPJ;
	}
	
	public String getNome() {
		return "Pessoa Jur�dica: " + super.getNome() + " - CNPJ: " + this.CNPJ;
	}
}
