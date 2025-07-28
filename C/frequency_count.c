#include <stdio.h>
#include <stdlib.h>

void countFrequency(int arr[], int n) {
    int *hash = (int *)calloc(100001, sizeof(int));
    
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    
    printf("Element : Frequency\n");
    for(int i = 0; i < n; i++) {
        if(hash[arr[i]] != 0) {
            printf("%d : %d\n", arr[i], hash[arr[i]]);
            hash[arr[i]] = 0;
        }
    }
    free(hash);
}

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr, n);
    return 0;
}