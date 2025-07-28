#include <stdio.h>

int findLargest(int arr[], int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {45, 87, 23, 90, 12, 56, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findLargest(arr, n);
    printf("Largest element: %d\n", result);
    
    return 0;
}