#include<stdio.h>

int power(int a, int b);

    int main(){

        int a,b;
        printf("Enter a & b:");
        scanf("%d %d",&a,&b);
        printf("%d\n",power(a,b));

    return 0;
}

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    int result = 1;
    result = power(a,b-1) * a;
    return result;
}