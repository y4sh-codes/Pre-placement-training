#include <stdio.h>

int isIdentity(int mat[100][100], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                return 0;
    return 1;
}

int main() {
    int n, mat[100][100];
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    if (isIdentity(mat, n))
        printf("Identity Matrix\n");
    else
        printf("Not an Identity Matrix\n");
    return 0;
}
