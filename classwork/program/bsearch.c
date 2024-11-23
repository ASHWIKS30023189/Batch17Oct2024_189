/*
#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;  // Calculate the middle index
        
        if (arr[mid] == target) {
            return mid;  // Target found
        }
        
        if (arr[mid] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }
    
    return -1;  // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 11;

    int result = binary_search(arr, size, target);
    
    if (result != 0) {
        printf("Element %d is at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
*/
#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;  // Return index if target is found
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Search the right half
        }
        else {
            high = mid - 1;  // Search the left half
        }
    }

    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};  // Sorted array
    int target = 7;  // Target to search for
    int size = 5;  // Size of the array

    int result = binary_search(arr, size, target);  // Call binary search

    if (result != -1) {
        printf("Element %d found at index %d.\n",target, result);  // Element found
    } else {
        printf("Element not found.\n");  // Element not found
    }

    return 0;
}


/*
 * #include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found at index mid
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Search the right half
        }
        else {
            high = mid - 1;  // Search the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    int size;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Ask the user to input the elements (array must be sorted)
    printf("Enter the elements in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    // Ask the user for the target element to search
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binary_search(arr, size, target);

    // Display result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found.\n", target);
    }

    return 0;
}

*/
