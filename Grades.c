#include<stdio.h>
int main(){
    int rollno,m1,m2,m3,total;
    float avg;
    printf("Enter Rollno:");
    scanf("%d",&rollno);
    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3.0;
    printf("Rollno:%d\n",rollno);
    printf("Total:%d\n",total);
    printf("Average:%f\n",avg);
    if(avg>70)
        printf("Grade A\n");
    else if(avg>60)
        printf("Grade B\n");
    else if(avg>50)
        printf("Grade C\n");
    else if (avg>40)
        printf("Grade D\n");
    else
        printf("Grade F\n");
    return 0;
}