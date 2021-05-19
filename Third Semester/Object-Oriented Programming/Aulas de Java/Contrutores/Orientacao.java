public class Orientacao {

	public static void main(String[] args) {	
		
		
		String nome = "Fulano de Tal", CPF = "7896544235612", cargo = "Gerente";
		
		Funcionario func1 = new Funcionario(nome,CPF);
		Funcionario func2 = new Funcionario(nome);
		Funcionario func3 = new Funcionario(nome,cargo,123);
		Funcionario func4 = new Funcionario(nome,123,CPF);
		Funcionario func5 = new Funcionario();

		System.out.println("Funcionário 1:");
		System.out.println("Nome:\t\t"+func1.getNome());
		System.out.println("CPF:\t\t"+func1.getCPF());
		System.out.println("Cargo:\t\t"+func1.getCargo());
		System.out.println("Matrícula:\t"+func1.getMatricula());
		
		System.out.println("\nFuncionário 2:");
		System.out.println("Nome:\t\t"+func2.getNome());
		System.out.println("CPF:\t\t"+func2.getCPF());
		System.out.println("Cargo:\t\t"+func2.getCargo());
		System.out.println("Matrícula:\t"+func2.getMatricula());
		
		System.out.println("\nFuncionário 3:");
		System.out.println("Nome:\t\t"+func3.getNome());
		System.out.println("CPF:\t\t"+func3.getCPF());
		System.out.println("Cargo:\t\t"+func3.getCargo());
		System.out.println("Matrícula:\t"+func3.getMatricula());
		
		System.out.println("\nFuncionário 4:");
		System.out.println("Nome:\t\t"+func4.getNome());
		System.out.println("CPF:\t\t"+func4.getCPF());
		System.out.println("Cargo:\t\t"+func4.getCargo());
		System.out.println("Matrícula:\t"+func4.getMatricula());
		
		System.out.println("\nFuncionário 5:");
		System.out.println("Nome:\t\t"+func5.getNome());
		System.out.println("CPF:\t\t"+func5.getCPF());
		System.out.println("Cargo:\t\t"+func5.getCargo());
		System.out.println("Matrícula:\t"+func5.getMatricula());	
	}

}
