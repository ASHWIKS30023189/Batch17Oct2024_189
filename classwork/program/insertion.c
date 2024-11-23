
#include <stdio.h>


void insertionSort(int arr[], int n) {
    int key, j;
    
    
    for (int i = 1; i < n; i++) {
        key = arr[i];  
        j = i - 1;

     
        while (j >= 0 && key < arr[j] ) {
            arr[j + 1] = arr[j];  
            j -= 1;
        }
        arr[j + 1] = key;
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
    printArray(arr, n);

    insertionSort(arr, n); 

    printf("Sorted array: ");
    printArray(arr, n);  

    return 0;
}


