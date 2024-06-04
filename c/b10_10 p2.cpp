#include <stdio.h>
#define max 100

void nhapmang(int a[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int main(){
	int n,a[max];
	nhapmang(a,n);
	xuatmang(a,n);
	return 0;
}
