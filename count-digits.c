#include <stdio.h>

int main(){
    int n, count=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    
    for(int i=n; i != 0; i/=10){
        count++;
    }
    
    printf("%d",count);
    return 0;
}
