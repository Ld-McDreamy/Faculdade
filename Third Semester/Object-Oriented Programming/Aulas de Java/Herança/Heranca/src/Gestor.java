
public class Gestor extends Funcionario {
	
	private String cargo;
	private String setor;
	
	public Gestor(String nome, String cargo, int Matricula) {
		super(nome, Matricula);
		this.cargo = cargo;
	}
	
	@Override
	public double taxaGremio() {
		// TODO Auto-generated method stub
		return super.getSalario()*0.01;
	}
	
	public String getCargo() {
		return cargo;
	}
	
	public void setCargo(String cargo) {
		this.cargo = cargo;
	}
	
	public String getSetor() {
		return setor;
	}
	
	public void setSetor(String setor) {
		this.setor = setor;
	}

	
	
}
