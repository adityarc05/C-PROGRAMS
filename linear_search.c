#include <stdio.h>

void main(){
    int i, n,key,  a[50], flag;
    printf("Enter the number :  ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key : ");
    scanf("%d",&key);
    for (i = 0 ; i < n; i++){
        if (a[i] == key){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        printf("Element found at position %d", i+1);
    }
    else
    {
        printf("Element not found");
    }}