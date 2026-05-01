#include<stdio.h>
    int main(){
        int n, isprime = 1;
        printf("Enter a number:");
        scanf("%d",&n);

        for(int i=2; i<n; i++){
            if(n % i == 0){
                isprime = 0;
            }
        } if(isprime == 1){
            printf("It is a prime number\n");
        }else{
            printf("It is not a prime number\n");
        }
        return 0;
    }