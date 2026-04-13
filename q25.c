#include <stdio.h>

void spiralTraversal(int matrix[][100], int rows, int cols) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        
        // Traverse top row
        for (int i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }
}

int main() {
    int matrix[100][100], rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Spiral Traversal: ");
    spiralTraversal(matrix, rows, cols);

    return 0;
}
