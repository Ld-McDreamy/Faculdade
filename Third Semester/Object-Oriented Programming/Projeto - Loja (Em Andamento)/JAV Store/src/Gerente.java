
public class Gerente extends Funcionario {
	
	private int time;
	private double bonus, orcamento;
	
	// Contrutor Terciário:
	public Gerente(String nome, String CPF, String dataNasc, int matricula, int turno, String departamento, String grade) {
		super(nome, CPF, dataNasc, matricula, turno, departamento, grade);
		
	}
	
	// Sets e Gets da Classe Gerente:
	public int getTime() {
		return time;
	}
	public void setTime(int time) {
		this.time = time;
	}
	public double getBonus() {
		return bonus;
	}
	public void setBonus(double bonus) {
		this.bonus = bonus;
	}
	public double getOrcamento() {
		return orcamento;
	}
	public void setOrcamento(double orcamento) {
		this.orcamento = orcamento;
	}
	
}
