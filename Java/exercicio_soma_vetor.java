import java.util.Locale;
import java.util.Scanner;


public class exercicio_soma_vetor {

	public static void main(String[] args) {
		
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double soma, media;
		int n;
		System.out.print("Quantos numeros vc vai digitar: ");
		n = sc.nextInt();
		
		double[] vet = new double[n];
		
		for (int i = 0; i < n; i++) { 
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
			
		}
		
		System.out.println();
		System.out.print("Valores: ");
		for (int i = 0; i < n; i++) { 
			System.out.print(String.format(" %.1f", vet[i]));
		}
		
		System.out.println();
		
		soma = 0;
		for (int i = 0; i < n; i++) { 
			soma = soma + vet[i];
		}
		
		System.out.println("Soma = " + String.format("%.2f", soma));
		media = soma / n;
		System.out.println("Media = " + String.format("%.2f", media));
		
		sc.close();

	}

}
