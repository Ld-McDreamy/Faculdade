
public class Professor extends Funcionario {
	
	private String disciplina;
	private int cargaHoraria;
	
	//
	public Professor(String nome, String disciplina, int Matricula) {
		super(nome, Matricula);
		this.setDisciplina(disciplina);
	}
	
	@Override
	public double taxaGremio() {
		return super.getSalario()*0.02;
	}

	public String getDisciplina() {
		return disciplina;
	}

	public void setDisciplina(String disciplina) {
		this.disciplina = disciplina;
	}

	public int getCargaHoraria() {
		return cargaHoraria;
	}

	public void setCargaHoraria(int cargaHoraria) {
		this.cargaHoraria = cargaHoraria;
	}
	
	
	
}
