#include<stdio.h>

int iseven(int n);

    int main(){
        int n;

        printf("Enter a num:");
        scanf("%d",&n);
        printf("%d",iseven(n));
    return 0;
    }

int iseven(int n){
    if(n % 2 == 0){
        return 1;
    } else{
        return 0;
    }
}