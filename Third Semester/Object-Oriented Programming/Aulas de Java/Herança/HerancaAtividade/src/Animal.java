
public abstract class Animal {
	
	// Atributos da Classe Animal:
	private String nome, cor, ambiente;
	private double comprimento, velocidadeM;
	private int numeroP;
	
	// Método Construtor da Classe Animal:
	Animal(String nome, String cor, String ambiente, double comprimento, double velocidadeM, int numeroP){
		this.nome = nome;
		this.cor = cor;
		this.ambiente = ambiente;
		this.comprimento = comprimento;
		this.velocidadeM = velocidadeM;
		this.numeroP = numeroP;
	}
	
	// Método Dados da Classe Animal:
	public void dados() {
		System.out.println("• Nome do Animal: " + getNome() +"\n• Cor: " + getCor() + "\n• Ambiente: " + getAmbiente());
		System.out.println("• Comprimento " + getComprimento() + " cm\n• Velocidade Média: " + getVelocidadeM() + " m/s\n• Número de Patas: " + getNumeroP());
	}
	
	// Getters e Setters da Classe Animal:
	public String getNome() {
		return nome;
	}
	public String getCor() {
		return cor;
	}
	public String getAmbiente() {
		return ambiente;
	}
	public double getComprimento() {
		return comprimento;
	}
	public double getVelocidadeM() {
		return velocidadeM;
	}
	public int getNumeroP() {
		return numeroP;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	public void setAmbiente(String ambiente) {
		this.ambiente = ambiente;
	}
	public void setComprimento(double comprimento) {
		this.comprimento = comprimento;
	}
	public void setVelocidadeM(double velocidadeM) {
		this.velocidadeM = velocidadeM;
	}
	public void setNumeroP(int numeroP) {
		this.numeroP = numeroP;
	}
	
	
	
}
