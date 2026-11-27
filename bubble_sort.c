#include<stdio.h>

void main(){
    int i, j,temp, n, a[50], sorted[50];
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the element : ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);

    }
    printf("Entered elements are : ");
    for (i= 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    for (i = 1; i < n; i++){
        for (j = 0; j <= n-i-1; j++){
            if( a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j +1] = temp;
            } 
        }
    }
    printf("Sorted list is : ");
    for(i = 0; i <n; i++){
        printf("%d\t", a[i]);
    }
}