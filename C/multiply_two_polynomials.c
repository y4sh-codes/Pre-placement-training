#include <stdio.h>
#define MAX 200

void multiply(int A[], int B[], int m, int n) {
    int result[MAX] = {0};

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[i + j] += A[i] * B[j];

    printf("Product of polynomials:\n");
    for (int i = m + n - 2; i >= 0; i--)
        if (result[i] != 0)
            printf("%dx^%d ", result[i], i);
}

int main() {
    int m, n, A[MAX], B[MAX];

    printf("Enter size of first polynomial: ");
    scanf("%d", &m);
    printf("Enter coefficients: ");
    for (int i = 0; i < m; i++) scanf("%d", &A[i]);

    printf("Enter size of second polynomial: ");
    scanf("%d", &n);
    printf("Enter coefficients: ");
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);

    multiply(A, B, m, n);
    return 0;
}
