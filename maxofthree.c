#include <stdio.h>

int main() {int x, y,z;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x, &y, &z);
    
    if(x>y){
        if(x>z){
            printf("%d is max\n",x);
        }
        else{
            printf("%d is max\n",z);
        }
    }
    else if(y>x){
            if(y>z){
                printf("%d is max\n",y);
            } else{
                printf("%d is max\n",z);
            }
        }
    else{
        printf("no max");
    }

    return 0;
}
