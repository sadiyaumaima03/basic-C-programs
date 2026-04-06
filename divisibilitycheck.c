#include<stdio.h>
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%d",&n);

        if((n%5==0)&&(n%11==0)){
            printf("The number is divisible by both 5 & 11\n");
        } else{
            printf("Is not divisible by both");
        }
        return 0;
    }