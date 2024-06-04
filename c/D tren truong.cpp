#include <stdio.h>

//Hàm nh?p ma tr?n
void NhapMaTran(int a[100][100], int d, int c)
{
    for(int i = 0 ; i < d ; i++)
        for(int j = 0 ; j < c ; j++)
            scanf("%d", &a[i][j]);
}

//Hàm ki?m tra S? nguyên t? (SV t? code)
int KTSNT(int n)
{
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
		return 1;}
}

//Hàm li?t kê theo di?u ki?n (SV t? code)
void LietKe(int a[100][100], int d, int c, int k)
{
	int y=0;
	for(int j=0; j < c; j++){
		printf("%d ",a[k][j]);
	}
	printf("\n");
	for(int j=0; j < c; j++){
		if(a[k][j]==KTSNT(a[k][j])){
			printf("%d",a[k][j]);
			y=1;		
		}	
	}
	if(y==0)
	printf("none");
}

int main(int argc, char *argv[]) {

    int a[100][100], d, c, k;

    scanf("%d%d%d", &d, &c, &k);

    NhapMaTran(a, d, c);

    LietKe(a, d, c, k);

}
