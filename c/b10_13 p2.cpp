#include <stdio.h>
#define max 100

void nhapmang(int a[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int ktram(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>=0) return 0;
	}
	return 1;
}

//void xuatam(int a[],int n){
//	for(int i=0;i<n;i++){
//		if(ktrle(a[i])==1){
//			printf("1");
//		}else{
//			printf("0");}
//	}
//}

int main(){
	int a[max],n;
	nhapmang(a,n);
//	xuatam(a,n);
	for(int i=0;i<n;i++){
		if(ktram(a[i])==1){
			printf("1");
		}
		else{printf("0");
		}
	}	
}
