#include <stdio.h>
#include <stdbool.h>

// Ki?m tra s? nguyên t?
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Li?t kê các s? nguyên t? trong m?t m?ng
void printPrimes(int arr[], int size) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            found = true;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int d, c, k;
    scanf("%d%d%d", &d, &c, &k);

    int a[d][c];
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // In các ph?n t? trên dòng k
    for (int j = 0; j < c; j++) {
        printf("%d ", a[k][j]);
    }
    printf("\n");

    // Li?t kê các s? nguyên t? trên dòng k
    printPrimes(a[k], c);

    return 0;
}
