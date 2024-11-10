// Write a Program to Calculate the Sum of Natural Numbers using recursion.

#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}