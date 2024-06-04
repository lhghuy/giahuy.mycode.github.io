#include <stdio.h>
#define max 100

int nhapmang(int a[],int n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",a[i]);
	}
}

int tongle(int a[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			s+=a[i];
		}
	}
	retrun s;
}

int main(){
	int n,a[max];
	int c=tongle(a,n);
	printf("%d",c);
}
