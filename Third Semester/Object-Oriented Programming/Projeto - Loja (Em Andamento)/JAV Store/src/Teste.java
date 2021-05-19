import java.util.InputMismatchException;

import javax.swing.JOptionPane;

public class Teste {
			
	
	
			
	        public static boolean Checagem(String numero)
	        {
	        	numero.equals(numero);
	        	boolean checagem = true;
	        	
	        	if (numero.equals("0000000000000000") ||
	        			numero.equals("1111111111111111") ||
	        			numero.equals("2222222222222222") || numero.equals("3333333333333333") ||
	        			numero.equals("4444444444444444") || numero.equals("5555555555555555") ||
	        			numero.equals("6666666666666666") || numero.equals("7777777777777777") ||
	        			numero.equals("8888888888888888") || numero.equals("9999999999999999") ||
	        			(numero.length() != 16)) {
	        				
	        			checagem = false;
	        			return checagem;
	        	} 
	        	
	        	else {
	        		int sum = 0;
		            boolean alternate = false;
		            
	        		try {
			            for (int i = numero.length() - 1; i >= 0; i--) {
			            	int n = Integer.parseInt(numero.substring(i, i + 1));
			                
			            	if (alternate) {
			                	n *= 2;
			                    if (n > 9) n = (n % 10) + 1;
			    
			            	}
			            	
			                sum += n;
			                alternate = !alternate;
			                
			            }
			           
			            if(sum % 10 == 0) {
			            	numero = numero.substring(0, 4) + " " + numero.substring(4, 8) + " " +
			            			numero.substring(8, 12) + " " + numero.substring(12, 16);
			            	checagem = true;
			            }
			            else {
			            	checagem = false;
			            	return checagem;
			            }
			            	
		        		}catch (InputMismatchException erro) {
		    				checagem = false;
		    				JOptionPane.showMessageDialog(null, "Erro: " + erro, "Mensagem de ERRO", JOptionPane.ERROR_MESSAGE);
		    				return checagem;
		    			}
	        		
	        	return checagem;
	        		
	        	}
	        		
	        	
	                
	       
	        }
	        
	        public static void main(String[] args) {
	        	String ccNumber;
	        	ccNumber = "6011445154255046";
	        	System.out.println("Resultado = "+ Checagem(ccNumber));

	    	}
	        
}

