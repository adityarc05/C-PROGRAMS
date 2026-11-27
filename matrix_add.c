#include<stdio.h>
void main(){
    int i, j, m, n, a[50][50], b[50][50], c[50][50];
    printf("Enter the number of rows and cokums : ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of  matrix A : ");
    for(i = 0; i < m; i++){
        for(j= 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of  matrix B : \n");
    for(i = 0; i < m; i++){
        for(j= 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix multiplication :\n ");
    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
        
    }
    for(i = 0; i <m ; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

}