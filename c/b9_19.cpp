#include <stdio.h>

int main(){
	long long n,b=1;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		b=b*i;
	}
	printf("%lld",b);
}
