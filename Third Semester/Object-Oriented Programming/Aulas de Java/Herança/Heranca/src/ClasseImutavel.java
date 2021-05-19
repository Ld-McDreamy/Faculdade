
public final class ClasseImutavel {
	// O "final" evita que a classe seje herdada.
	// �til em login por exemplo, que voc� n�o quer que nada seje herdado.
	
	private final int valorImutavel;
	// Uma v�riavel com o termo "final" significa que ele nunca poder� ser mudado e nem vai, apenas receber� o valor uma vez. 
	
	public ClasseImutavel(int valor) {
		this.valorImutavel = valor;
	}
}
