#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);

    // Khai b�o ma tr?n vu�ng
    int matrix[n][n];

    // Nh?p gi� tr? v�o ma tr?n
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // In c�c ph?n t? tr�n du?ng ch�o ch�nh
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    // In t?ng c�c ph?n t? tr�n du?ng ch�o ch�nh
    printf("\n%d", sum);

    return 0;
}
