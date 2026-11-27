 #include<stdio.h>
void main(){
    int i, n, key, f, l, m, a[50], flag;
    printf("Enter the numebr of elements : ");
    scanf("%D", &n);
    printf("Enter the numbers in ascending order : ");
    for(i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key  :");
    scanf("%d", &key);
    f = 0;
    l = n-1;
    while (f <= l){
        m = (f+l)/2;
        if (a[m] == key){
            flag = 1;
            break;

        }
        else if(key > a[m]){
            l = m + 1;
        }
        else{
            l = m-1;
        }
    }
    if (flag == 1){
        printf("Element found at position %d", m+1);
    }
    else {
        printf("Element not found ");
    }

}