#include <stdio.h>

void moveZerosToEnd(int *arr, int n) {
    int count = 0;  // Position to place the next non-zero element

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];  // Place non-zero at the front
        }
    }

    // Fill remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, n);

    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
