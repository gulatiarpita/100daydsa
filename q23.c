#include <stdio.h>

int main() {
    int n;

    // Input size
    scanf("%d", &n);

    int A[n][n];
    int isSymmetric = 1;

    // Input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    // Output result
    if(isSymmetric)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
