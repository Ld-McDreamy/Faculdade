
public class Diretor extends Gestor {
	
	private double bonus;
	
	public Diretor(String nome, String cargo, double bonus, int Matricula) {
		super(nome, cargo, Matricula);
		this.bonus = bonus;
		
	}
	
	public double calcularSalario(int meses) {
		double salario = super.getSalario()*meses + this.bonus;
		return salario;
	}

	public double getBonus() {
		return bonus;
	}

	public void setBonus(double bonus) {
		this.bonus = bonus;
	}
	
}
