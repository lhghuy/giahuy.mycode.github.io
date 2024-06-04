#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);

    // Khai báo ma tr?n vuông
    int matrix[n][n];

    // Nh?p giá tr? vào ma tr?n
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // In các ph?n t? trên du?ng chéo chính
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    // In t?ng các ph?n t? trên du?ng chéo chính
    printf("\n%d", sum);

    return 0;
}
