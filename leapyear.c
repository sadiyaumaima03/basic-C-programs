#include<stdio.h>
    int main(){
        int year;
        printf("Enter year:");
        scanf("%d",&year);

        if(year%400==0){
            printf("Is a leap year\n");
        } else if((year%100==0)&&(year%400!=0)){
            printf("Is not a leap year\n");
        } else if((year%4==0)&&(year%100!=0)){
            printf("Is a leap year\n");
        } else{
            printf("Is not a leap year\n");
        }
        return 0;
    }