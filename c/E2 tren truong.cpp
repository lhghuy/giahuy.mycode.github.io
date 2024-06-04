#include <stdio.h>
#include <math.h>

void NhapMaTran(int a[100][100], int d, int c)
{
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
}

void LietKeDong(int a[100][100], int d, int c, int k)
{
    
    for (int j = 0; j < c; j++)
        printf("%d ", a[k][j]);
    printf("\n");
}

void LietKeSoNguyenTo(int a[100][100], int d, int c, int k)
{
    
    int flag = 0;
    for (int j = 0; j < c; j++) {
        int x = a[k][j];
        int count = 0;
        if (x < 2) continue;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("%d ", x);
            flag = 1;
        }
    }
    if (flag == 0) printf("None");
    printf("\n");
}

void LietKeCot(int a[100][100], int d, int c, int x)
{
   
    for (int i = 0; i < d; i++)
        printf("%d ", a[i][x]);
    printf("\n");
}

void LietKeSoChinhPhuong(int a[100][100], int d, int c, int x)
{
    
    int flag = 0;
    for (int i = 0; i < d; i++) {
        int y = a[i][x];
        int sqr = sqrt(y);
        if (sqr * sqr == y) {
            printf("%d ", y);
            flag = 1;
        }
    }
    if (flag == 0) printf("None");
    printf("\n");
}

int main()
{
    int a[100][100], d, c, x;
    scanf("%d%d%d", &d, &c, &x);

    NhapMaTran(a, d, c);

//    LietKeDong(a, d, c, x);
//    LietKeSoNguyenTo(a, d, c, x);
    LietKeCot(a, d, c, x);
    LietKeSoChinhPhuong(a, d, c, x);

    return 0;
}
