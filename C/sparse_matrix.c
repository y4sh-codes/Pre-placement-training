#include<stdio.h>

int isSparse(int rows, int cols, int matrix[rows][cols]){
    int zero_count = 0;
    int size = rows*cols;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(matrix[i][j] == 0){
                zero_count++;
            }
        }
    }

    if (zero_count > size/2){
        return 1;
    }
    return 0;
}

int main(){
    int rows, cols;
    printf("Enter matrix dimensions: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
            
    if(isSparse(rows, cols, matrix)){
        printf("Matrix is sparse");
    }

    else{
        printf("Matrix is not sparse");
    }

    return 0;
}