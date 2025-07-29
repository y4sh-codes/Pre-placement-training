#include<stdio.h>

void printSpiral(int rows, int cols, int matrix[rows][cols]) {
    int top = 0, left = 0;
    int bottom = rows - 1, right = cols - 1;
    
    printf("\nSpiral Order:\n");
    while (top <= bottom && left <= right) {
        for(int i = left; i <= right; i++){
            printf("%d ", matrix[top][i]);
        }
        top++;

        for(int i = top; i <= bottom; i++){
            printf("%d ", matrix[i][right]);
        }
        right--;

        if(top <= bottom) {
            // Print bottom row
            for(int i = right; i >= left; i--){
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        if(left <= right) {
            // Print left column
            for(int i = bottom; i >= top; i--){
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printSpiral(rows, cols, matrix);
    return 0;
}