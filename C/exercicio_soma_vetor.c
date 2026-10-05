#include <stdio.h>





int main(){


    int n, cont;
    double media, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];
    soma = 0;
    media = 0;
    cont = 0;

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
        cont++;
    }

    media = (double)soma / cont;

    printf ("Valores = ");
        for (int i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);

    }
    printf ("\nSoma = %.2lf\n", soma);
    printf ("Media = %.2lf\n", media);



  return 0;
}
