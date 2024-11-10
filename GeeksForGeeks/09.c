// Write a Program to find the factorial of a given number.

#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of n: %d\n", fact(n));
    return 0;
}

int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}