#include <stdio.h>
#include <math.h>

int main (){

    int n, negativos;

    printf("qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat [n][n];

    for (int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }      
    }
    printf("DIAGONAL PRINCIPAL: ");
    for (int i=0; i<n; i++){
        printf("%d ",mat[i][i]);
    }

    negativos = 0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
           if(mat[i][j] <0 )
            negativos++;
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d",negativos);
    return 0;
}