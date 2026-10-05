#include <stdio.h>





int main() {

    int n, contNegativo;
    printf("Qual a ordem da matriz?");
    scanf ("%d", &n);

    int mat[n][n];
    contNegativo = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d, %d]: ", i , j);
            scanf ("%d", &mat[i][j]);
            if (mat[i][j] < 0) {
                contNegativo++;
            }
        }
    }
    printf("Digonal principal:\n");
    for (int i = 0; i < n; i++){
        printf ("%d ", mat[i][i]);

    }
    printf("\nQuantidade de Negativos = %d\n", contNegativo);


  return 0;
}
