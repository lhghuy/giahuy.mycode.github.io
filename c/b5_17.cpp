#include <stdio.h>

void tach(int n){
	for(int i=2;i<=n;++i){
		while(n%i==0){
			printf("%d ",i);
			n/=i;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	tach(n);
}
