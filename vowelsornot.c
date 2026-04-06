#include<stdio.h>
    int main(){
        char x;
        printf("enter an alphabet:");
        scanf("%c",&x);

        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
            printf("It is a vowel\n");
        } else{
            printf("It is a consonant\n");
        }
        return 0;
    }