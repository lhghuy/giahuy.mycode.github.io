#include <stdio.h>

int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
		return 1;
	}
}

int main(){
	int n,a=0;
	scanf("%d",&n);
	int b=snt(n);
	for(int i = 0; i < n; i++){
	if(snt(i)==1&&snt(i)%5==0){
		a+=1;
	}}
		printf("%d",a);
}
