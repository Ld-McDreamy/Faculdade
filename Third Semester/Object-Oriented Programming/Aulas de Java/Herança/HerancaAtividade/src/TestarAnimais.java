
public class TestarAnimais {

	public static void main(String[] args) {
		
		Mamifero camelo = new Mamifero("Camelo", "Amarelo", "Terra", 150.0, 2.0, 4);
		Peixe tubarao = new Peixe("Tubarão", "Cinzento", "Mar", 300.0, 1.5, 0, "Barbatana e Cauda");
		Mamifero ursocanada = new Mamifero("Usro-do-Canada", "Vermelho", "Terra", 180.0, 0.5, 4, "Mel");
		
		System.out.println();
		
		camelo.dados();
		System.out.println();
		tubarao.dadosPeixe();
		System.out.println();
		ursocanada.dadosMamiferos();
		
	}

}
