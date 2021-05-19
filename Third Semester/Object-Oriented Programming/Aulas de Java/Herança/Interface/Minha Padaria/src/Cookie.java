
public class Cookie implements Item, Produto { // 
	private String nome, departamento, info, data;
	private double preco;
	
	// Construtor
	public Cookie(String nome, double preco, String departamento, String info, String data) {
		this.nome = nome;
		this.preco = preco;
		this.departamento = departamento;
		this.data = data;
		this.info = info;
		
	}
	
	// Métodos:
	public void setNomeItem(String nome) {
		this.nome = nome;
	}
	
	public String getNomeItem() {
		return nome;
	}

	public double getPreco() {
		return preco;
	}

	public void setPreco(double preco) {
	
	}
	
	public String getDepartamento() {
		
		return departamento;
	}
	
	@Override
	public double calcularPrecoFinal() {
		preco *= 1.1; // Dica Aleatória: 0.1 ou .1 é igual
		return preco;
	}

	public void setNaoRecomendado(String info) {
		this.info = info;
	}

	public void setValidade(String data) {
		this.data = data;
		
	}
	
	public String getNaoRecomendado() {
		return info;
	}
	
	public String getValidade() {
		return data.substring(0, 2) + "/" + data.substring(2, 4) + "/" +
				data.substring(4, 8);
	}
	
}
