#include <stdio.h>

int main() {
    int x, y,z;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x, &y, &z);
    
    if(x>y){
        if(x>z){
            printf("%d is max\n",x);
        }
        else if(z>x){
            if(z>y){
                printf("%d is max\n",z);
            } 
        }
    } else{
        printf("%d is max",y);
    }

    return 0;
}