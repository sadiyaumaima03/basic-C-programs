#include<stdio.h>
    int main(){
        int x, y, result = 1;

        printf("Enter x:");
        scanf("%d",&x);
        printf("Enter pow y:");
        scanf("%d",&y);

        for(int i=1; i<=y; i++){
            result *= x;
        }
        printf("%d\n",result);

        return 0;
    }