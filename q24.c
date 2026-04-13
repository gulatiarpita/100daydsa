#include <stdio.h>

int main() {
    int m, n;

    // Input dimensions
    scanf("%d %d", &m, &n);

    int A[m][n];
    int isToeplitz = 1;

    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check Toeplitz property
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(A[i][j] != A[i-1][j-1]) {
                isToeplitz = 0;
                break;
            }
        }
        if(!isToeplitz)
            break;
    }

    // Output result
    if(isToeplitz)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
