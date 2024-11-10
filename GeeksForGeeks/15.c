// Write a Program to rotate the array to the left.

#include<stdio.h>

void takearr(int arr[], int n);
void printarr(int arr[], int n);
void rotatearr(int arr[], int n, int steps);

int main(){
    int arr[5], steps;
    takearr(arr, 5);
    printf("Array: ");
    printarr(arr, 5);
    printf("Enter number of steps: ");
    scanf("%d", &steps);
    printf("Array after %d rotation: ", steps);
    rotatearr(arr, 5, steps);
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

void rotatearr(int arr[], int n, int steps){
    int temp;
    for(int i = 1; i <= steps; i++){
        temp = arr[0];
        for(int j = 0; j < n; j++){
            if(j < n-1){
                arr[j] = arr[j+1];
            } else{
                arr[j]  = temp;
            }
        }
    }
}