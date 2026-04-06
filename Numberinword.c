#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("One\n");
            break;
    case 2: printf("Two\n");
            break;
    case 3: printf("Three\n");
    default: printf("Invalid input\n");
             break;
    }
    return 0;
}