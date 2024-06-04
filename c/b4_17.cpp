#include<stdio.h>

int gt(int n, int m){
	int tich = 1;
	for(int i = 1; i <= m; i++)
		tich = tich * n;
	return tich;
}

int dem_so(int n){
	int dem = 0;
	while(n){
		dem++;
		n/=10;
	}
	return dem;
}

int ts(int n){
	int s = 0, tmp = n, delta = dem_so(n);
	while(n){
		int x = n%10;
		s = s + gt(x, delta);
		n/=10;
	}
	if(s==tmp) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++)
		if(ts(i)==1) printf("%d ", i);
	return 0;
}
