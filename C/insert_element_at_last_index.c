#include <stdio.h>
#include <stdlib.h>

// Function to insert element dynamically 

void insert_element(int **arr, int *n, int element) {
    int *temp = (int *)realloc(*arr, (*n + 1) * sizeof(int)); // A temp array is taken with a size (n+1)
    if (temp == NULL) { // Checking if temp array corresponds to NULL
        printf("Memory allocation failed\n");
        free(*arr);
        exit(1);
    }

    *arr = temp; // Array "arr" is changed to match the configuration of temp array 
    (*arr)[*n] = element;  // Element is inserted at last index of the array
    (*n)++; // Size updated                
}

int main() {
    int n, *arr = NULL; // declaring variable to n to take the size of the initial array and an integer pointer    
    printf("Enter the number of elements in the array initially: ");
    scanf("%d", &n); // Taking value of n from the user 

    arr = (int *)calloc(n, sizeof(int)); // Allocating memory to arr
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n); // Taking the elements in the initial array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element; // Element to be added at last index
    printf("Enter the element you want to insert at last index: ");
    scanf("%d", &element);

    insert_element(&arr, &n, element);  // Function call 

    printf("\nFinal Array:\n"); // The final array 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Freeing some extra memory, if there
    return 0;
}
