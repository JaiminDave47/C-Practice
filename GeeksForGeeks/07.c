// Write a Program to find the largest number among three numbers.

#include<stdio.h>

int main(){
    int n[3];
    
    for(int i = 0; i < 3; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &n[i]);
    }

    if(n[0] > n[1] && n[0] > n[2]){
        printf("%d is largest.\n", n[0]);
    } else if(n[1] > n[0] && n[1] > n[2]){
        printf("%d is largest.\n", n[1]);
    } else if(n[2] > n[0] && n[2] > n[1]){
        printf("%d is largest.\n", n[2]);
    }
    return 0;
}