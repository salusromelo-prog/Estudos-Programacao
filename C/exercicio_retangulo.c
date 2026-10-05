#include <stdio.h>
#include <math.h>

int main ()
 {

    double area, altura , base , perimetro, diagonal;

    printf ("Base do Retangulo: ");
    scanf ("%lf", &base);

    printf ("Altura do Retangulo: ");
    scanf ("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt (pow (altura , 2.0) + pow(base,2.0));

    printf ("Area do triangulo = %.4lf\n", area);
    printf ("Perimetro = %.4lf\n", perimetro);
    printf ("Diagonal = %.4lf\n", diagonal);








    return 0;

}

