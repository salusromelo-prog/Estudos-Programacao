#include <stdio.h>


int main () {

    int x, y ,soma, troca;


    printf("Digite os dois numeros:\n");
    scanf ("%d",&x);
    scanf ("%d", &y);

    if (x> y ){
        troca = x;
        x = y;
        y = x;
    }
    soma = 0;
    for (int i = x+1; i < y; i++){
        if (i % 2 != 0){
           soma = soma + i;
        }
    }
    printf ("Soma dos impares = %d", soma);



   return 0;
}
