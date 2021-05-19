
public class Cliente extends Pessoa{
	
	private int cadastro, pontos;
	private double compra;
	private String cartao;
	
	// Contrutor Secundário:
	public Cliente(String nome, String CPF, String dataNasc, int cadastro) {
		super(nome, CPF, dataNasc);
		this.cadastro = cadastro;
		this.pontos = 0;
		this.compra = 0.0;
	}
	
	// Sets e Gets da Classe Cliente:
	public int getCadastro() {
		return cadastro;
	}
	public void setCadastro(int cadastro) {
		this.cadastro = cadastro;
	}
	public int getPontos() {
		return pontos;
	}
	public void setPontos(int pontos) {
		this.pontos = pontos;
	}
	public double getCompra() {
		return compra;
	}
	public void setCompra(double compra) {
		this.compra = compra;
	}
	public String getCartao() {
		return cartao;
	}
	public void setCartao(String cartao) {
		this.cartao = cartao;
	}
	
}
