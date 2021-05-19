
public final class ClasseImutavel {
	// O "final" evita que a classe seje herdada.
	// útil em login por exemplo, que você não quer que nada seje herdado.
	
	private final int valorImutavel;
	// Uma váriavel com o termo "final" significa que ele nunca poderá ser mudado e nem vai, apenas receberá o valor uma vez. 
	
	public ClasseImutavel(int valor) {
		this.valorImutavel = valor;
	}
}
