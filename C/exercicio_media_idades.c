#include <stdio.h>


int main() {

    int idade, cont, soma;
    double media;
    soma = 0;
    cont = 0;

    printf("Digite as idades: \n");
    scanf ("%d", &idade);
    if (idade < 0 ){
        printf ("Impossivel calcular!\n");
    }
    else {

    while (idade >= 0 ){
        soma = soma + idade;
        cont++;
        scanf("%d", &idade);
    }
        media = (double)soma / cont;
        printf ("Media = %.2lf\n",media);
    }




  return 0;
}
