#include <stdio.h>




int main () {

    int num1 ,num2, num3;

    printf("Primeiro Valor: ");
    scanf("%d", &num1);

    printf("Segundo Valor: ");
    scanf("%d", &num2);

    printf("Terceiro Valor: ");
    scanf("%d", &num3);

    if (num1 < num2 && num3) {

         printf ("Menor = %d\n", num1);
    }
    else if (num2 < num3 ){
        printf("Menor = %d\n", num2);

    }
    else {
        printf ("Menor = %d\n", num3);
    }





  return 0;

}
