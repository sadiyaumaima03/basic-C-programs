#include<stdio.h>
#include<math.h>

    float squareroot(float n, float guess);

        int main(){
            float n;
            printf("Enter a number:");
            scanf("%f",&n);
            float guess = n/2.0;
            printf("%.2f\n",squareroot(n,guess));

        return 0;
        }

    float squareroot(float n, float guess){
        float newguess = (guess + n / guess) / 2;

        if(fabs(newguess - guess) < 0.0001){
            return newguess;
        }

        return squareroot(n, newguess);
    }