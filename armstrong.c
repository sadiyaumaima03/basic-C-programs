#include <stdio.h>
    int main(){
        int n, digit, count = 0, result = 1, orig, sum = 0;
        
        printf("Enter a number:");
        scanf("%d",&n);
        
        if(n<0) n=-n;
        orig = n;
        
        for(int i=n; i!=0; i/=10){
            count++;    
        }
        for(int j=1; j<=count; j++){
            result = 1;
            digit = n % 10;
            for(int k=1; k<=count; k++){
                result *= digit;
            }
            sum += result;
            n /= 10;
        } if(orig == sum){
            printf("It is an Armstrong number\n");
        }else{
            printf("It is not an Armstrong number\n");
        }
    return 0;
}