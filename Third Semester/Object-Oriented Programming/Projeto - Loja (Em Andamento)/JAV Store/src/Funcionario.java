
public abstract class Funcionario extends Pessoa {
	
	private int matricula, turno;
	private float descontoFunc;
	private double salario, meta;
	private String departamento, grade;
	
	// Contrutor Secundário:
	public Funcionario(String nome, String CPF, String dataNasc, int matricula, int turno, String departamento, String grade) {
		super(nome, CPF, dataNasc);
		this.matricula = matricula;
		this.turno = turno;
		this.departamento = departamento;
		this.grade = grade;
	}
	
	// Sets e Gets da Classe Abstrata Funcionario:
	public int getMatricula() {
		return matricula;
	}
	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
	public int getTurno() {
		return turno;
	}
	public void setTurno(int turno) {
		this.turno = turno;
	}
	public float getDescontoFunc() {
		return descontoFunc;
	}
	public void setDescontoFunc(float descontoFunc) {
		this.descontoFunc = descontoFunc;
	}
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	public double getMeta() {
		return meta;
	}
	public void setMeta(double meta) {
		this.meta = meta;
	}
	public String getDepartamento() {
		return departamento;
	}
	public void setDepartamento(String departamento) {
		this.departamento = departamento;
	}
	public String getGrade() {
		return grade;
	}
	public void setGrade(String grade) {
		this.grade = grade;
	}
	
}
