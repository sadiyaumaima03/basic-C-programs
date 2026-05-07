#include<stdio.h>

int sum(int n);

int main(){
    printf("Sum: %d",sum(5));
    return 0;
}

//Recursive function
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumN_1 = sum(n-1);
    int sumN = sumN_1 + n;
    return sumN;
}
