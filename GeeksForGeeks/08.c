// Write a Program to make a simple calculator.

#include<stdio.h>

int main(){
    int a, b;
    char ch;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &ch);
    printf("Enter operand 1: ");
    scanf("%d", &a);
    printf("Enter operand 2: ");
    scanf("%d", &b);
    if(ch == '+'){
        printf("a + b = %d\n", a + b);
    } else if(ch == '-'){
        printf("a - b = %d\n", a - b);
    } else if(ch == '*'){
        printf("a * b = %d\n", a * b);
    } else if(ch == '/'){
        printf("a / b = %d\b", a / b);
    } else{
        printf("Enter valid operator.\n");
    }
    return 0;
}