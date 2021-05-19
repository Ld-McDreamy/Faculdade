
public abstract class Funcionario {
	private String nome;
	private String CPF;
	private double salario;
	private final int Matricula;
	
	public abstract double taxaGremio();
	
	public double calcularSalario(int meses){
		double salario = this.salario*meses;
		return salario;
		//return this.salario*meses;
	}
	
	public Funcionario(String nome, int Matricula){
		this.nome= nome;
		this.Matricula = Matricula;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getCPF() {
		return CPF;
	}
	
	public void setCPF(String cPF) {
		CPF = cPF;
	}
	
	public double getSalario() {
		return salario;
	}
	
	public void setSalario(double salario) {
		this.salario = salario;
	}
	
	public int getMatricula() {
		return Matricula;
	}
	
	// Só pode ser atribuido uma vez no Construtor:
	/*
	public void setMatricula(int Matricula) {
		this.Matricula = Matricula;
	}
	*/
}
