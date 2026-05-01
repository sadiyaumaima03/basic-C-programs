#include<stdio.h>
    int main(){
        int n, rev = 0, orig;

        printf("Enter a num:");
        scanf("%d",&n);

        orig = n;

        for(; n!=0; n /= 10){
            rev = rev * 10 + n % 10;
        } if(rev == orig){
            printf("Number is palindrome\n");
        } else{
            printf("Number is not palindrome\n");
        }
        return 0;
    }