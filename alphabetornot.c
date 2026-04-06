#include<stdio.h>
    int main(){
        char x;
        printf("Enter an alphabet:");
        scanf("%c",&x);

        if(x >= 'A' && x <= 'Z'){
            printf("It is an uppercase alphabet\n");
        } else if(x >= 'a' && x <= 'z'){
            printf("It is the lowercase alphabet\n");
        } else{
            printf("It is not an alphabet\n");
        }
        return 0;
    }