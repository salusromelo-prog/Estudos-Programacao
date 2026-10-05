#include <stdio.h>
#include <math.h>


 int main ()
 {

    double a, b , c , delta , x1 , x2;


    printf("Coeficiente A: ");
    scanf ("%lf", &a);
     printf("Coeficiente B: ");
    scanf ("%lf", &b);
     printf("Coeficiente C: ");
    scanf ("%lf", &c);

    delta = (b *b) -4 *a *c;
    if (delta < 0 || a == 0) {

         printf ("Essa equacao nao possui raizes reais");
    }
    else {
    x1 = (-b + sqrt(delta)) / (2.0 * a);
    x2 = (-b - sqrt(delta)) / (2.0 * a);

    printf ("X1 = %.4lf\n", x1);
    printf ("X2 = %.4lf\n", x2);
    }

   return 0;


 }
