#include<stdio.h>

int fibonacci(int n);

    int main(){

        int n;
        printf("Enter a number:");
        scanf("%d",&n);
        printf("%d",fibonacci(n));

    return 0;
    }

int fibonacci(int n){
    if(n == 0){
        return 0;
    } if(n == 1){
        return 1;
    }
    int fibN_1 = fibonacci(n - 1);
    int fibN_2 = fibonacci(n - 2);
    int fibN = fibN_1 + fibN_2;
    return fibN;
}