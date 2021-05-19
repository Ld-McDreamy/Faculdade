
public class Peixe extends Animal {
	
	// Atributos da Classe Peixe:
	private String caracteristica;
	
	// Método Construtor da Classe Peixe:
	Peixe(String nome, String cor, String ambiente, double comprimento, double velocidadeM, int numeroP, String caracteristica) {
		super(nome, cor, ambiente, comprimento, velocidadeM, numeroP);
		this.caracteristica = caracteristica;
	}
	
	// Método Dados da Classe Peixe:
		public void dadosPeixe() {
			System.out.println("• Nome do Animal: " + getNome() +"\n• Cor: " + getCor() + "\n• Ambiente: " + getAmbiente());
			System.out.println("• Comprimento " + getComprimento() + " cm\n• Velocidade Média: " + getVelocidadeM() + " m/s");
			System.out.println("• Número de Patas: " + getNumeroP() + "\n• Característica: " + getCaracteristica());
		}

	// Getter e Setter da Classe Peixe:
	public String getCaracteristica() {
		return caracteristica;
	}

	public void setCaracteristica(String caracteristica) {
		this.caracteristica = caracteristica;
	}
	

}
