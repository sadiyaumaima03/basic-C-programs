#include<stdio.h>
    int main(){
        int x,y;
        printf("Enter X & Y:");
        scanf("%d %d",&x,&y);

        if(x>y && y>0){
            printf("Quadrant-01\n");
        }else if(x<0 && y>0){
            printf("Quadrant-02\n");
        }else if(x<0 && y<0){
            printf("Quadrant-03\n");
        }else if(x>0 && y<0){
            printf("Quadrant-04\n");
        }else if(x==0 && y==0){
            printf("Origin\n");
        }else if(y==0){
            printf("X-axis\n");
        }else{
            printf("Y-axis\n");
        }
        return 0;
    }