#include <stdio.h>

int main() {
    int m, n;

    // Input dimensions
    scanf("%d %d", &m, &n);

    int A[m][n], T[n][m];

    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose logic
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Print transpose
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
