#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to partition the array around a pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot is the last element
    int i = low - 1; // index of smaller element

    // Rearranging the elements around the pivot
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;  // increment index of smaller element
            swap(&arr[i], &arr[j]); // swap if element is smaller than pivot
        }
    }

    // Place the pivot element in its correct position
    swap(&arr[i + 1], &arr[high]);
    return i + 1; // return the pivot index
}

// QuickSort function that recursively sorts the array
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pi - 1);  // Left of pivot
        quickSort(arr, pi + 1, high); // Right of pivot
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {8, 4, 7, 9, 2, 3};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Get the number of elements

    printf("Original Array: \n");
    printArray(arr, n);

    // Call QuickSort function to sort the array
    quickSort(arr, 0, n - 1);

    printf("Sorted Array: \n");
    printArray(arr, n);

    return 0;
}


