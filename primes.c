#include<stdio.h>

void primecheck(int n);

    int main(){
        int n;
        
        printf("Enter a number:");
        scanf("%d",&n);

        primecheck(n);

        return 0;
    }

void primecheck(int n){
    int isprime;
    for(int i=2; i<=n; i++){
        isprime = 1;
        for(int j=2; j<i; j++){
            if(i % j == 0){
                isprime = 0;
            }
        } if(isprime == 1){
            printf("%d\n",i);
        }
    }
}