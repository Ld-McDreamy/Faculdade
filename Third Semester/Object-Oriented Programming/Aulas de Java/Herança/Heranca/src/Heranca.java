
public class Heranca {

	public static void main(String[] args) {

		Professor prof = new Professor("Marcos", "Programação", 458);
		Gestor gestor = new Gestor("Maia", "Diretoria", 856);
		
		System.out.println(prof.getDisciplina());
		System.out.println(gestor.getNome());

	}

}
