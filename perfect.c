#include <stdio.h>
    int main(){
        int n,sum = 0;
        printf("Enter a number:");
        scanf("%d",&n);
        for(int i=1; i<n; i++){
            if(n % i == 0){
                sum += i;
            }
        }if(n == sum){
            printf("It is a perfect number\n");
        }else{
            printf("It is not a perfect number\n");
        }
    return 0;
}