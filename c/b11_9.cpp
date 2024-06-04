#include<stdio.h>

int main() {
	// khai bao mang
	int n;
	scanf("%d",&n);
	int a[n];

	// nhap mang
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);

	// Tim so lon nhat va vi tri trong mang
	// tim so nho nhat va vtri
	int min = a[0], vt_min = 0;
	int max = a[0], vt = 0;
	for(int i=1;i<n;++i){
		if(a[i]>=max){
			// cap nhat max va vtri
			max = a[i];
			vt = i;
		}
		if(a[i]<=min){
			min = a[i];
			vt_min = i;
		}
	}
	printf("%d %d",max,vt+1);
	printf("\n%d %d",min,vt_min+1);
}

