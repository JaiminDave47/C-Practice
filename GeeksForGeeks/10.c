// Write a Program to Convert Binary to Decimal.

#include<stdio.h>
#include<math.h>

int countDigit(int num);
int bintodeci(int bin, int count);

int main(){
    int b, count;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    count = countDigit(b);
    printf("%d in decimal: %d\n", b, bintodeci(b, count));
    return 0;
}

int countDigit(int num){
    int count = 0;
    while(num != 0){
        num /= 10;
        count++;
    }
    return count;
}

int bintodeci(int bin, int count){
    int decimal = 0;
    int temp;
    int i = 1;
    while(i <= count){
        temp = bin % 10;
        decimal += temp*(pow(2, i-1));
        bin /= 10;
        i++;
    }
    return decimal;
}