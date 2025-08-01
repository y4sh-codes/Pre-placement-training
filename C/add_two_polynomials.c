#include <stdio.h>

#define MAX 100

void addPolynomials(int a[], int b[], int m, int n) {
    int size = m > n ? m : n;
    int result[MAX];

    for (int i = 0; i < size; i++) {
        int coeffA = i < m ? a[i] : 0;
        int coeffB = i < n ? b[i] : 0;
        result[i] = coeffA + coeffB;
    }

    printf("Sum of polynomials:\n");
    for (int i = size - 1; i >= 0; i--) {
        if (result[i] != 0)
            printf("%dx^%d ", result[i], i);
    }
}

int main() {
    int m, n;
    printf("Enter degree+1 of first polynomial: ");
    scanf("%d", &m);
    int a[MAX];
    printf("Enter coefficients:\n");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    printf("Enter degree+1 of second polynomial: ");
    scanf("%d", &n);
    int b[MAX];
    printf("Enter coefficients:\n");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    addPolynomials(a, b, m, n);
    return 0;
}
