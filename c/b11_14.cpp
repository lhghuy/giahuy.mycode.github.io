#include <stdio.h>
#define max 100

void nhapmang(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void laplai(int a[],int n){
	int x,s=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			s++;
		}
//		printf("%d",a[i]);
	}
	
	printf("%d",s);
}

int main(){
	int n,a[max];
	nhapmang(a,n);
	laplai(a,n);
	
}
