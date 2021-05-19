
public class Mamifero extends Animal {
	
	// Atributos da Classe Mamífero:
		private String alimento;
	
	// Método Construtor da Classe Mamífero:
	Mamifero(String nome, String cor, String ambiente, double comprimento, double velocidadeM, int numeroP) {
		super(nome, cor, ambiente, comprimento, velocidadeM, numeroP);
	}
		
	Mamifero(String nome, String cor, String ambiente, double comprimento, double velocidadeM, int numeroP, String alimento) {
		super(nome, cor, ambiente, comprimento, velocidadeM, numeroP);
		this.alimento = alimento;
	}
	
	// Método Dados da Classe Peixe:
	public void dadosMamiferos() {
		System.out.println("• Nome do Animal: " + getNome() +"\n• Cor: " + getCor() + "\n• Ambiente: " + getAmbiente());
		System.out.println("• Comprimento " + getComprimento() + " cm\n• Velocidade Média: " + getVelocidadeM() + " m/s");
		System.out.println("• Número de Patas: " + getNumeroP() + "\n• Alimento: " + getAlimento());
	}	
	
	
	// Getter e Setter da Classe Mamífero:
	public String getAlimento() {
		return alimento;
	}

	public void setAlimento(String alimento) {
		this.alimento = alimento;
	}
	
}
