
public class Funcionario {
	private String nome;
	private int matricula;
	private String CPF;
	private double salario;
	private String cargo;
	
	public Funcionario()
	{
		
	}
	
	
	public Funcionario(String nome)
	{
		this.nome = nome;
	}

	public Funcionario(String nome, String CPF)
	{
		this.nome = nome;
		this.CPF = CPF;
	}
	
	public Funcionario(String nome, String cargo, int matricula)
	{
		this.nome = nome;
		this.setCargo(cargo);
		this.matricula = matricula;
	}

	public Funcionario(String nome, int matricula, String CPF)
	{
		this.nome = nome;
		this.CPF = CPF;
		this.matricula = matricula;
	}
	
	
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getMatricula() {
		return matricula;
	}
	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
	public String getCPF() {
		return CPF;
	}
	public void setCPF(String CPF) {
		this.CPF = CPF;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}


	public String getCargo() {
		return cargo;
	}


	public void setCargo(String cargo) {
		this.cargo = cargo;
	}

	
}
