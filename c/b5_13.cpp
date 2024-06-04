#include <stdio.h>

int tn(int n){
	int tmp = n;
	int d=0;
	while(n){
		d = d*10 + n%10;
		n/=10;
	}
	if(d==tmp) return 1;
	else return 0;
}

int check9(int n){
	while(n){
		int x = n%10;
		if(x==9) return 0;
		n/=10;
	}
	return 1;
}

int main () {
	int n; scanf("%d",&n);
	int dem =0;
	for(int i=2;i<n;++i){
		if(tn(i)==1&&check9(i)==1){
			++dem;
		}
	}
	printf("%d",dem);
}

//dem co bn so
//thuan nghic 1<x<n khong chu 9


//29   -=> return false

