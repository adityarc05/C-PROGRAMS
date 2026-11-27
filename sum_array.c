#include<stdio.h>
void main(){
    int i, n, j, a[10], b[10], c[10];
    printf("Enter the number of elements in Array : ");
    scanf("%d", &n);
    printf("Enter the elements of Array A : " );
    for(i = 0; i < n; i ++){
        scanf("%d", &a[i]);

    }
    printf("Enter the elements of Array B : " );
    for(i = 0; i < n; i ++){
        scanf("%d", &b[i]);
        
    }
    for (i = 0; i < n; i++){
        c[i] = a[i] + b[i];

    }
    printf("The sum of two arrays is : ");
    for(i = 0; i < n; i++){
        printf("%d\t", c[i]);
    }}