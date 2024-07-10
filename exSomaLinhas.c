#include<stdio.h>
//matrizes on GITHUB
int main (){

    int m,n;
    
    printf("qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double mat[m][n];
    double vet [m];

    for(int i=0;i<m;i++){
        printf("Digite os elementos da %da. linha: \n", i+1); //desta forma vai ler toda a linha
        for(int j=0;j<n;j++){ //percorrer cada coluna da linha
            scanf("%lf", &mat[i][j]);
        }
    }

//percorrer todo o vetor, acumular o valor iniciando com zero e somar a partir das colunas
    for(int i=0; i<m;i++){
        vet[i]=0;
        for (int j=0;j<n;j++){
            vet[i]=vet[i] + mat[i][j];
        }
    }
//leitura final da matriz e print
    printf("VETOR GERADO:\n");
    for(int i=0;i<m; i++){
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
