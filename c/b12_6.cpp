#include <stdio.h>
#define max 100

void nhapmang(int a[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int VTCC(int a[],int n){
	int vt;
	for(int i=n-1;i>0;i--){
		if(a[i]%2==0){
			vt=i;
			return vt+1;}
		}
		return -1;
	}


int main(){
	int n,a[max];
	nhapmang(a,n);
	int c=VTCC(a,n);
	printf("%d",c);
	return 0;	
}
