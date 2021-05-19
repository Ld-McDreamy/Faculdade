import java.util.Scanner;

public class aula01 {
    public static void main(String[] args) {

        float nota1, nota2, media;
        Scanner scan = new Scanner(System.in);

        System.out.println("Entre com a primeira nota: ");
        nota1 = scan.nextFloat();

        System.out.println("Entre com a segunda nota: ");
        nota2 = scan.nextFloat();

        media = (nota1 + nota2) / 2;

        System.out.println("A média é: " + media);

        if (media < 4)
            System.out.println("Aluno(a) Reprovado");
        else if (media < 6)
            System.out.println("Aluno(a) Recuperação");
        else
            System.out.println("Aluno(a) Aprovado");
    }
}
