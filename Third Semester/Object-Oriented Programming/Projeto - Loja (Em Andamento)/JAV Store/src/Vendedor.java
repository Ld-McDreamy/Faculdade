
public class Vendedor extends Funcionario{
	
	private int venda, quantCadastrado;
	private double comissao, valorVendas;
	
	// Contrutor Terciário:
	public Vendedor(String nome, String CPF, String dataNasc, int matricula, int turno, String departamento, String grade) {
		super(nome, CPF, dataNasc, matricula, turno, departamento, grade);
	
	}
	
	// Sets e Gets da Classe Vendedor:
	public int getVenda() {
		return venda;
	}
	public void setVenda(int venda) {
		this.venda = venda;
	}
	public int getQuantCadastrado() {
		return quantCadastrado;
	}
	public void setQuantCadastrado(int quantCadastrado) {
		this.quantCadastrado = quantCadastrado;
	}
	public double getComissao() {
		return comissao;
	}
	public void setComissao(double comissao) {
		this.comissao = comissao;
	}
	public double getValorVendas() {
		return valorVendas;
	}
	public void setValorVendas(double valorVendas) {
		this.valorVendas = valorVendas;
	}
	
}
