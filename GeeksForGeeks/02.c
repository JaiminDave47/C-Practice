// Write a Program to find the Sum of two numbers entered by the user.

#include<stdio.h>

int main(){
    int a, b, sum;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum of a and b: %d\n", sum);
    return 0;
}