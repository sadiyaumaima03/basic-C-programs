#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d\n",&x);
    y=x > 9 && x < 100;
    printf("%d",y);
    return 0;
}