#include<stdio.h>
    
void hotcold(int temp);

    int main(){
        
        int temp;
        printf("Enter temperature in celsius:");
        scanf("%d",&temp);
        hotcold(temp);

    return 0;
    }

void hotcold(int temp){
    if(temp <= 0){
        printf("Cold weather\n");
    } else if(temp < 30){
        printf("Moderate weather\n");
    } else if (temp >= 30){
        printf("Hot weather\n");
    }
    return; 
}
