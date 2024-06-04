#include <stdio.h>
#define max 10000

void nhapmang(int a[],int &n){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
	scanf("%d",&a[i]);}
}

int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int ham(int a[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		if(snt(a[i])) {
		//printf("%d",i);
		s++;
		}
	}
	return s;
}

int main(){
	int n,a[max];
//	printf("nhap n: ");
	nhapmang(a,n);
	int c=ham(a,n);
	printf("%d",c);
}
