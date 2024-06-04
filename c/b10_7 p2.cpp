#include <stdio.h>
#define max 100

void nhapmang(int a[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int sole(int a[],int n){
	int s=0;
	for(int i=0;i<n;i++){
	if(a[i]%2!=0){
		s++;
	}}
	return s;
}

int main(){
	int n,a[max];
	nhapmang(a,n);
	int c=sole(a,n);
	printf("%d",c);
}
