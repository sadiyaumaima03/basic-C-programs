#include<stdio.h>
    int main(){
        int a, b, c;
        printf("Enter 3 sides of triangle:");
        scanf("%d %d %d",&a,&b,&c);

        if(a == b && b == c && a == c){
            printf("Triangle is equilateral\n");
        }else if(a == b || b == c || a == c){
            printf("Triangle is isoceles\n");
        }else if(a != b && b != c && a != c){
            printf("Triangle is scalene\n");
        }else{
            printf("Not a triangle\n");
        }
        return 0;
    }