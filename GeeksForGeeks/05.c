// Write a Program to calculate Compound Interest.

#include<stdio.h>
#include<math.h>

int main(){
    float pr, t, rate, interest;
    printf("Enter principal amount: ");
    scanf("%f", &pr);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    float var = pow((1+rate), t);
    interest = pr*var;
    printf("Compound interest: %f\n", interest);
    return 0;
}