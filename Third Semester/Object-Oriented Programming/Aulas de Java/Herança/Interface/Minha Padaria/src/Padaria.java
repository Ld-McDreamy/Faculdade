
public class Padaria {

	public static void main(String[] args) {
		Cookie bauduco = new Cookie("Cookie Chocolate", 4.25, "Chocolates e Bolachas", "Contém Lactose e Contém Glúten", "08122021");
		Salgadinho doritos = new Salgadinho("Queijo Nacho", 5.89, "Salgadinhos e Balas", "Contém Lactose e Contém Glúten", "25112021");
		
		System.out.println("Nome do Produto: " + bauduco.getNomeItem());
		System.out.println("Departamento: " + bauduco.getDepartamento());
		System.out.printf("Preço de Compra: R$%.2f", bauduco.getPreco());
		System.out.printf("\nPreço de Venda: R$%.2f\n", bauduco.calcularPrecoFinal());
		
		System.out.println("Válido em: " + bauduco.getValidade());
		System.out.println("Atenção: " + bauduco.getNaoRecomendado());
		
		
		System.out.println("\nNome do Produto: " + doritos.getNomeItem());
		System.out.println("Departamento: " + doritos.getDepartamento());
		System.out.printf("Preço de Compra: R$%.2f", doritos.getPreco());
		System.out.printf("\nPreço de Venda: R$%.2f\n", doritos.calcularPrecoFinal());
		
		System.out.println("Válido em: " + doritos.getValidade());
		System.out.println("Atenção: " + doritos.getNaoRecomendado());

	}

}
