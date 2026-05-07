#include<stdio.h>

float convert_celsius(float c);
float convert_fahrenheit(float f);

    int main(){
        float c,f;

        printf("Enter Celsius:");
        scanf("%f",&c);
        printf("Fahrenheit: %.2f\n",convert_celsius(c));

        printf("Enter Fahrenheit:");
        scanf("%f",&f);
        printf("Celsius: %.2f\n",convert_fahrenheit(f));

    return 0;
    }

float convert_celsius(float c){
    return (c * 9/5) + 32;
}

float convert_fahrenheit(float f){
    return (f - 32) * 5/9;
}
