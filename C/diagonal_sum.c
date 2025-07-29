#include<stdio.h>

void diagonalSum(int rows, int cols, int matrix[rows][cols]){
    int sum = 0;
    if (rows == cols){
    for (int i = 0; i<rows; i++){
        sum = sum + matrix[i][i];
    }

    printf("Main diagonal sum = %d\n" , sum);

    sum = 0;

    for (int i = 0; i<rows; i++){
            sum = sum + matrix[i][rows-i-1];
    }

    printf("Anti-diagonal sum = %d\n", sum);
    }

    else{
        printf("Matrix is not a square matrix, so no diagonal sum is possible");
    }
}

int main(){
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
            
    diagonalSum(rows, cols, matrix);
    return 0;
}