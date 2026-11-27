// #include<stdio.h>

void main(){
    int i, j, n, temp, a[50];
    printf("Enter the number of elements :  ");
    scanf("%d", &n);
    printf("Enter the element");
    for(i = 0; i <n ; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i <n; i++){
        for (j = i+1; j <n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(i = 0; i <n ; i++){
        printf("%d\t", a[i]);
    }