#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
     for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[minIdx]>arr[j] ) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
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
    printArray(arr, n);
    selectionSort(arr, n);  
    printf("Sorted array: ");
    printArray(arr, n);  

    return 0;
}


