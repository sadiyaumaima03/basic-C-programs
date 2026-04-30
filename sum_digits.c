#include <stdio.h>

int main(){
    int n, sum=0;
    printf("enter a num:");
    scanf("%d",&n);
    
    for(; n!=0; n/=10){
        if(n<0) n = -n;
        sum += n % 10;
    }
    printf("%d",sum);
    return 0;
}