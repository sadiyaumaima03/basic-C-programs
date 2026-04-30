#include <stdio.h>

int main(){
    int n; 
    int count=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    
    for(int i=0;i,4;i++){
        int c;
        c=n/10;
        count++;
    }
    
    printf("%d",count);
    

    return 0;
}
