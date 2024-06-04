#include <stdio.h>

int check(int a){
	int sum = 0;
	for(int i=1;i<a;++i){
		if(a%i==0)
		sum+=i;
	}if(sum==a)
	return 1; else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;++i){
		if(check(i)==1)
		printf("%d ",i);
	}
}
