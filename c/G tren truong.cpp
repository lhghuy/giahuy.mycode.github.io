#include <stdio.h>

int main() {
    int n, i, j;
    float sum = 0, count = 0;

    // Nh?p s? d�ng v� c?t c?a ma tr?n
  
    scanf("%d", &n);

    int matrix[n][n];

    // Nh?p ma tr?n
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Xu?t c�c ph?n t? tr�n du?ng ch�o ph?
    
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-1-i]);
        sum += matrix[i][n-1-i];
        count++;
    }

    // T�nh trung b�nh c?ng c�c ph?n t? tr�n du?ng ch�o ph?
    float avg = sum / count;
    printf("\n%.2f", avg);

    return 0;
}
