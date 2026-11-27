#include<stdio.h>

int fact(int a);

int sum(int a);

int fact(int a){
    if (a == 0 || a == 1){
        return 1;


    }
    else{
        return fact(a-1)*a;
    }
}
int sum(int a){
    if (a == 0 ){
        return 0; 
    }

    return sum(a-1 )+a;
}
void main(){
    int b; 
    printf("enter a number : ");
    scanf("%d", &b);
    printf("Factorial of %d is %d \n", b, fact(b));
    printf("Sum of %d is %d ",b, sum(b));

}