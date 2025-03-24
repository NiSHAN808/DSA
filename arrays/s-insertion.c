#include <stdio.h>

void insertionSort(short arr[], int size) {
    for (int i = 1; i < size; i++) {
        short key = arr[i];
        int j = i - 1;
        
        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(short arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    short arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, size);
    
    insertionSort(arr, size);
    
    printf("Sorted array: ");
    printArray(arr, size);
    
    return 0;
}