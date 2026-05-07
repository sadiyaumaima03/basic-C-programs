#include<stdio.h>

//Declarations
float square(float side);
float circle(float rad);
float rectangle(float a, float b);

int main(){
    float a,b;

    printf("Enter your len & wid:");
    scanf("%f %f",&a,&b);
    printf("Area : %.2f\n", rectangle(a,b)); //Function call

    return 0;
    }

    //Definitions
float square(float side){
    return side * side;
}

float circle(float rad){
    return 3.14 * rad * rad;
}

float rectangle(float a, float b){
    return a * b;
}