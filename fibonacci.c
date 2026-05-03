#include<stdio.h>
    int main(){
        int n, x=0, y=1, next;
    
        printf("Enter a number:");
        scanf("%d",&n);

        for(int i=1; i<=n; i++){
            printf("%d\t",x);
            next = x+y;
            x = y;
            y = next;
        }
        return 0;
    }