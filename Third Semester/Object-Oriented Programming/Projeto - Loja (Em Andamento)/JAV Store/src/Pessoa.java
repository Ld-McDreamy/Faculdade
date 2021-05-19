import java.util.InputMismatchException;
import javax.swing.JOptionPane;

public abstract class Pessoa {
	
	private String nome, CPF, email, dataNasc;
	private int CEP, numero, telefone;
	
	// Contrutor Primário:
	public Pessoa(String nome, String CPF, String dataNasc) {
		this.nome = nome;
		this.CPF = CPF;
		this.dataNasc = dataNasc;
		this.email = "email@mail.com";
	}
	
	// Sets e Gets da Classe Abstrata Pessoa:
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getCPF() {
		return CPF.substring(0, 3) + "." + CPF.substring(3, 6) + "." +
				CPF.substring(6, 9) + "-" + CPF.substring(9, 11);
	}
	
	public boolean setCPF(String CPF) {
		CPF.equals(CPF);
		boolean checagem = true; 
			
		if (CPF.equals("00000000000") ||
			CPF.equals("11111111111") ||
		    CPF.equals("22222222222") || CPF.equals("33333333333") ||
		    CPF.equals("44444444444") || CPF.equals("55555555555") ||
		    CPF.equals("66666666666") || CPF.equals("77777777777") ||
		    CPF.equals("88888888888") || CPF.equals("99999999999") ||
		    (CPF.length() != 11)) {
				
			checagem = false;
			return checagem;
		}
				
		else{
			char dig10, dig11;
			int sm, i, r, num, peso;

			// "try" - protege o codigo para eventuais erros de conversao de tipo (int)
			try {
				// Calculo do 1o. Digito Verificador
				sm = 0;
				peso = 10;
				for (i=0; i<9; i++) {
					// converte o i-esimo caractere do CPF em um numero:
					// por exemplo, transforma o caractere '0' no inteiro 0
					// (48 eh a posicao de '0' na tabela ASCII)
					num = (int)(CPF.charAt(i) - 48);
					sm = sm + (num * peso);
					peso = peso - 1;
				}

				r = 11 - (sm % 11);
				if ((r == 10) || (r == 11)) dig10 = '0';
				else dig10 = (char)(r + 48); // converte no respectivo caractere numerico

				// Calculo do 2o. Digito Verificador
				sm = 0;
				peso = 11;
				for(i=0; i<10; i++) {
					num = (int)(CPF.charAt(i) - 48);
					sm = sm + (num * peso);
					peso = peso - 1;
				}

				r = 11 - (sm % 11);
				if ((r == 10) || (r == 11)) dig11 = '0';
				else dig11 = (char)(r + 48);

				// Verifica se os digitos calculados conferem com os digitos informados.
				if ((dig10 == CPF.charAt(9)) && (dig11 == CPF.charAt(10))) checagem = true;
				else {
					checagem = false;
					return checagem;
				}
			}catch (InputMismatchException erro) {
				checagem = false;
				JOptionPane.showMessageDialog(null, "Erro: " + erro, "Mensagem de ERRO", JOptionPane.ERROR_MESSAGE);
				return checagem;
			}
		
			this.CPF = CPF;
			}
		return checagem;
	}
	
	public String getEmail() {
		return email;
	}
	
	public void setEmail(String email) {
		this.email = email;
	}
	
	public String getDataNasc() {
		return dataNasc.substring(0, 2) + "/" + dataNasc.substring(2, 4) + "/" +
				dataNasc.substring(4, 8);
	}
	
	public void setDataNasc(String dataNasc) {
		this.dataNasc = dataNasc;
	}
	
	public int getCEP() {
		return CEP;
	}
	
	public void setCEP(int cEP) {
		CEP = cEP;
	}
	
	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}
	
	public int getTelefone() {
		return telefone;
	}
	
	public void setTelefone(int telefone) {
		this.telefone = telefone;
	}
	
}
