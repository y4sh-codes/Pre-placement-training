#include <stdio.h>

int countZeros(int mat[100][100], int n, int m) {
    int count = 0, i = 0, j = m - 1;

    while (i < n && j >= 0) {
        if (mat[i][j] == 0) {
            count += (j + 1);
            i++;
        } else {
            j--;
        }
    }

    return count;
}

int main() {
    int n, m, mat[100][100];
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter matrix (sorted rows):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    printf("Zero count: %d\n", countZeros(mat, n, m));
    return 0;
}
