#include<stdio.h>
void main(){
    int i, n, a[10];
    printf("Enter the number  of elements : ");
    scanf("%d", &n);
    printf("enter the elements : ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Original Array :");
    for(i = 0; i <n ; i++){
        printf("%d\t\n", a[i]);
    }
    printf("Reversed Array : ");
    for(i = n-1; i >= 0; i--){
        printf("%d\t\n", a[i]);
    }
}