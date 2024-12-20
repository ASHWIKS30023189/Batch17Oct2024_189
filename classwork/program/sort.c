#include <stdio.h>


void bubbleSort(int arr[], int n) {
   int temp;
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
       
        if (swapped == 0) {
            break;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Unsorted array: ");
    printArray(arr,n);
    
    bubbleSort(arr, n);
    
    
    printf("Sorted array: ");
    printArray(arr,n);
    
    return 0;
}




