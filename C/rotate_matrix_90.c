#include <stdio.h>

void rotateMatrix(int rows, int cols, int matrix[rows][cols]) {
    // First transpose the matrix
    for(int i = 0; i < rows; i++) {
        for(int j = i; j < cols; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    // Then reverse each row
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols/2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols-1-j];
            matrix[i][cols-1-j] = temp;
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter matrix dimensions: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
            
    rotateMatrix(rows, cols, matrix);
    
    printf("\nRotated Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}