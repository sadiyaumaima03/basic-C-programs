#include<stdio.h>

int main() {
    float m1,m2,m3,total;
    float avg;
    printf("Enter marks of all 3 subjects:");
    scanf("%f %f %f",&m1,&m2,&m3);
    
    //calculation
    total = m1+m2+m3;
    avg = total/3.0;
    
    if(avg>=90.0){
        printf("Grade A\n");
    }
    else if(avg>=80.0){
        printf("Grade B\n");
    }
    else if(avg>=70.0){
        printf("Grade C\n");
    }
    else if(avg>=60.0){
        printf("Grade D\n");
    }
    else if(avg>=50.0){
        printf("Grade E\n");
    }
    else{
        printf("FAIL\n");
    }

    return 0;
}
