#include <stdio.h>



int main (){

    int n, contMenores;
    double soma, media, porcentagem;

    printf ("Quantas pessoas serao digitadas? ");
    scanf ("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i = 0; i < n; i++){
        printf ("Dados da %da pessoa\n:", i + 1);
        printf ("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf ("idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + alturas[i];
    }
    media = soma / n;
    printf ("Media das alturas: %.2lf\n", media);

    contMenores = 0;
    for (int i = 0; i < n ; i++){
        if (idades[i] < 16){
            contMenores++;
        }
    }
    porcentagem = contMenores * 100.0/n;
    printf ("\nPercentual de menor de 16 anos = %.2lf %%\n", porcentagem);

    for (int i = 0; i < n; i++){
        if (idades[i] < 16){
            printf ("%s\n", nomes[i]);
        }
    }






  return 0;
}
