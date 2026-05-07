#include<stdio.h>

int percentage(int sci, int math, int sanskrit);

    int main(){
        int science, math, sanskrit;
        printf("Enter marks for three subs:");
        scanf("%d %d %d",&science,&math,&sanskrit);
        printf("Percentage : %d\n",percentage(science, math, sanskrit));

    return 0;
    }

int percentage(int sci, int math, int sanskrit){
    return ((sci + math + sanskrit) / 3);
}