#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    (x%2==0)?printf("%d is even number\n",x):printf("%d is odd number\n",x);
    return 0;
}