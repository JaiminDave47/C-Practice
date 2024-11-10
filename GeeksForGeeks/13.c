// Write a Program to find the maximum and minimum of an Array.

#include<stdio.h>

int main(){
    int arr[10] = {1, 67, 3, 32, 45, 78, 90, 21, 46, 21};
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}