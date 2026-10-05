import java.util.Locale;
import java.util.Scanner;

public class exercicio_menor_de_tres {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int a, b, c, menor;
        
        System.out.print("Digite o primeiro numero: ");
        a = sc.nextInt();
        System.out.print("Digite o segundo numero: ");
        b = sc.nextInt();
        System.out.print("Digite o terceiro numero: ");
        c = sc.nextInt();
        
        menor = a;
        if ( b < menor) { 
           menor = b;
        }
        else if ( c < menor) {  
        	menor = c;
        }
        
        System.out.println("Menor = " + menor);
	
        sc.close();
	}

}
