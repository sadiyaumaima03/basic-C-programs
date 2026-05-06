#include<stdio.h>
    int main(){
        int a, b, temp, orig_a, orig_b, LCM, GCD;

        printf("Enter 2 numbers:");
        scanf("%d %d",&a,&b);

        orig_a = a;
        orig_b = b;

        while(b != 0){
            temp = a % b;
            a = b;
            b = temp;
        }
        printf("GCD: %d\n",a);
        GCD = a;
        LCM = (orig_a * orig_b) / GCD;
        printf("LCM: %d\n",LCM);
    return 0;
    }