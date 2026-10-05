#include <stdio.h>


int main ()
{

    double largura, comp, area, preco, valorMetro;

    printf ("Digite a largura do terreno: ");
    scanf ("%lf", &largura);

    printf ("Digite o comprimento do terreno: ");
    scanf ("%lf", &comp);

    printf ("Digite o valor do metro quadrado: ");
    scanf ("%lf", &valorMetro);

    area = largura * comp;
    preco = area * valorMetro;

    printf("Area do terreno = %.2lf\n", area);
    printf ("Valor do terreno = %.2lf\n", preco);


    return 0;
}
