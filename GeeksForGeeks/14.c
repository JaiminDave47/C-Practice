// Write a Program to Reverse an Array.

#include<stdio.h>

void takearr(int arr[], int n);
void printarr(int arr[], int n);
void revarr(int arr[], int n);

int main(){
    int arr[5];
    takearr(arr, 5);
    printf("Array: ");
    printarr(arr, 5);
    revarr(arr, 5);
    printf("Reversed array: ");
    printarr(arr, 5);
    return 0;
}

void takearr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void printarr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void revarr(int arr[], int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}