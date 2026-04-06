#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter a b values:");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    printf("%d is maximum",max);
    return 0;
}