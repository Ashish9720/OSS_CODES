#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

 
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int transpose[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Transpose of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
