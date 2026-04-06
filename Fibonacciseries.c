#include<stdio.h>
int main(){
    int first=0, second=1, next, n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d\t",first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}