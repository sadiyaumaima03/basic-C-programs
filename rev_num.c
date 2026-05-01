#include<stdio.h>
    int main(){
        int n, rev = 0;
        
        printf("Enter a num:");
        scanf("%d",&n);

        for(; n!= 0; n /= 10){
            rev = rev * 10 + n % 10;
        }
        printf("%d\n",rev);

        return 0;
    }