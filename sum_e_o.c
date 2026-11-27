#include<stdio.h>

int sum(int a[50], int n);

int sumo(int a[50], int n);

int sume(int a[50], int n);

int sum(int a[50], int n){
    int sum = 0, i;
    for (i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
    
}

int sumo(int a[50], int n){
    int sumo = 0, i;
    for (i = 0; i < n; i++){
        if ((a[i]%2) != 0){
            sumo += a[i];
        }}
        
    return sumo;
    
}

int sume(int a[50], int n){
    int sume = 0, i;
    for (i = 0; i < n; i++){
        if ((a[i]%2) == 0){
            sume += a[i];
        }
        }
        return sume;
    }

void main(){
    int n, i,  a[50];
    printf("Enter the numebr of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for ( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Total sum is : %d\n", sum(a, n));
    printf("Total number of even numbers in array is : %d\n", sume(a, n));
    printf("Total number of odd numbers in array is : %d\n", sumo(a, n));


}